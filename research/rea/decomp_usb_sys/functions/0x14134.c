// rea decompile_all
// name: FUN_00014134
// address: 0x14134
// body: available
// range: 0x14134-0x14231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00014134(longlong param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 auStackY_a8 [32];
  longlong local_78;
  undefined4 local_70 [2];
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStackY_a8;
  uVar4 = 0;
  local_78 = 0;
  iVar2 = FUN_00014078(param_1,&local_78);
  if (-1 < iVar2) {
    local_68[0] = '\0';
    local_70[0] = 0x50;
    iVar2 = FUN_000112ac(local_78,L"VendorSpecificInterfaceGuid",1,local_68,local_70);
    cVar1 = local_68[0];
    if (iVar2 != 0) {
      cVar1 = '\0';
    }
    local_68[0] = cVar1;
    if (-1 < iVar2) {
      pcVar3 = local_68;
      for (; (cVar1 != '\0' && (uVar4 < 0x4f)); uVar4 = uVar4 + 1) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *param_2 = (short)cVar1;
        param_2 = param_2 + 1;
        cVar1 = *pcVar3;
      }
      *param_2 = 0;
      if (local_78 != 0) {
        ZwClose();
      }
      goto LAB_0001420d;
    }
  }
  if (local_78 != 0) {
    ZwClose();
  }
LAB_0001420d:
  FUN_00026110(local_18 ^ (ulonglong)auStackY_a8);
  return;
}

