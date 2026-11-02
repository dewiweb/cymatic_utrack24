// rea decompile_all
// name: FUN_00458070
// address: 0x458070
// body: available
// range: 0x458070-0x45818c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar3 = DAT_00cfff4c;
  InternetSetOptionW();
  if (*(int *)(in_ECX + 0x2c) == 0) {
    *(undefined4 *)(in_ECX + 0x2c) = 30000;
  }
  else if (*(int *)(in_ECX + 0x2c) < 0) {
    *(undefined4 *)(in_ECX + 0x2c) = 0xffffffff;
  }
  InternetSetOptionW();
  InternetSetOptionW();
  InternetSetOptionW();
  InternetSetOptionW();
  InternetSetOptionW();
  FUN_0044ec90();
  iVar1 = FUN_0045e120(*(undefined4 *)(in_ECX + 0x10));
  iVar2 = InternetConnectW(uVar3,*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),
                           (iVar1 != 0) * '\x02' + '\x01',0);
  *(int *)(in_ECX + 8) = iVar2;
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      uVar3 = FtpOpenFileW(iVar2,*(undefined4 *)(param_1 + 0x2c),0x80000000,0x12,0);
      *(undefined4 *)(in_ECX + 0xc) = uVar3;
      return;
    }
    FUN_00458190(param_1,param_3,param_4);
  }
  return;
}

