// rea decompile_all
// name: FUN_00016f70
// address: 0x16f70
// body: available
// range: 0x16f70-0x17104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016f70(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0 [3];
  char local_c8 [80];
  char local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_00029100 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_3 + 0x28);
  local_e8 = 0;
  local_e0[0] = 0;
  iVar4 = FUN_000193d8(*(longlong *)(lVar2 + 0x20),local_e0);
  lVar3 = local_e0[0];
  if (-1 < iVar4) {
    local_78[0] = '\0';
    FUN_00022da8(lVar2,local_78);
    lVar3 = local_e0[0];
    iVar4 = FUN_00011418(&local_e8,local_e0[0]);
    if (-1 < iVar4) {
      if (lVar3 != 0) {
        ZwClose(lVar3);
      }
      iVar4 = 0;
      goto LAB_0001702b;
    }
  }
  if (lVar3 != 0) {
    ZwClose(lVar3);
  }
LAB_0001702b:
  if (iVar4 < 0) {
    if (local_e8 != 0) {
      ZwClose();
    }
  }
  else {
    local_c8[0] = '\0';
    sprintf((char *)local_e0,"%02u");
    FUN_000117c0(local_c8,(char *)local_e0,0x50);
    pcVar5 = local_c8;
    cVar1 = local_c8[0];
    while (cVar1 != '\0') {
      cVar1 = *pcVar5;
      if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')) {
        *pcVar5 = '_';
      }
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar4 = FUN_00011418(param_2,local_e8);
    if (iVar4 < 0) {
      if (local_e8 != 0) {
        ZwClose();
      }
    }
    else if (local_e8 != 0) {
      ZwClose();
    }
  }
  FUN_00026110(local_28 ^ (ulonglong)auStack_108);
  return;
}

