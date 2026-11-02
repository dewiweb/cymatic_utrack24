// rea decompile_all
// name: FUN_00016864
// address: 0x16864
// body: available
// range: 0x16864-0x16935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00016864(longlong param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res8 [2];
  
  local_res8[0] = param_1;
  lVar4 = FUN_00024054((longlong *)(DAT_00029268 + 0x120),*param_2);
  uVar5 = 0;
  if (lVar4 == 0) {
    uVar5 = 0xe0000040;
  }
  else {
    pcVar1 = (char *)(lVar4 + 0xec);
    FUN_000117c0(pcVar1,(char *)(param_2 + 0xd),0x28);
    local_res8[1] = 0;
    local_res8[0] = 0;
    iVar2 = FUN_00016f70(local_res8 + 1,local_res8,lVar4);
    if ((-1 < iVar2) &&
       (iVar3 = FUN_0001134c(local_res8[0],L"Nickname",1,pcVar1), iVar2 = 0, iVar3 < 0)) {
      iVar2 = iVar3;
    }
    if (local_res8[0] != 0) {
      ZwClose();
    }
    FUN_00016db0(local_res8 + 1);
    if (iVar2 < 0) {
      uVar5 = 0xe0000060;
    }
  }
  return uVar5;
}

