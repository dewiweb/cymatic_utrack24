// rea decompile_all
// name: FUN_0001626c
// address: 0x1626c
// body: available
// range: 0x1626c-0x1633c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001626c(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  lVar3 = DAT_00029268;
  lVar6 = FUN_00024054((longlong *)(DAT_00029268 + 0x120),*param_2);
  uVar8 = 0;
  if (lVar6 == 0) {
    uVar7 = 0xe0000040;
  }
  else {
    pcVar1 = (char *)(param_3 + 4);
    *param_3 = *(undefined4 *)(lVar6 + 0x1c);
    cVar2 = *(char *)(lVar6 + 0x114);
    param_3[2] = 0;
    param_3[1] = (uint)(cVar2 == '\0');
    param_3[3] = *(undefined4 *)(*(longlong *)(lVar6 + 0x20) + 0xe0);
    if (*(int *)(lVar3 + 0x744) != 0) {
      uVar4 = FUN_000117c0(pcVar1,(char *)(*(longlong *)(lVar6 + 0x20) + 0x1a14),0x28);
      iVar5 = FUN_000117c0(pcVar1 + uVar4," - ",0x28 - uVar4);
      uVar8 = (ulonglong)(uVar4 + iVar5);
    }
    FUN_000117c0(pcVar1 + uVar8,(char *)(lVar6 + 0xec),0x28 - (int)uVar8);
    uVar7 = 0;
  }
  return uVar7;
}

