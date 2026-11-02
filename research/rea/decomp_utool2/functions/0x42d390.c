// rea decompile_all
// name: FUN_0042d390
// address: 0x42d390
// body: available
// range: 0x42d390-0x42d510 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d390(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdd7c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x6d) = 0;
  FUN_006322a0(5000);
  FUN_00433330(uVar2);
  if (*(int *)(in_ECX + 0x78) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x74));
    *(undefined4 *)(in_ECX + 0x74) = 0;
    *(undefined4 *)(in_ECX + 0x78) = 0;
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  FUN_00433260();
  if (*(int *)(in_ECX + 0x84) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x80));
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x84) = 0;
  }
  *(undefined4 *)(in_ECX + 0x88) = 0;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0xe4) != 1) || (*(int *)(in_ECX + 0xe0) != 1)) {
    *(undefined4 *)(in_ECX + 0xe8) = 0x40;
    FUN_00403500(0x40,*(char *)(in_ECX + 0x174) != '\0');
    piVar1 = *(int **)(in_ECX + 0xf0);
    *(int **)(in_ECX + 0xec) = piVar1;
    *piVar1 = (int)(piVar1 + 4);
    *(undefined4 *)(*(int *)(in_ECX + 0xec) + 4) = 0;
    *(undefined4 *)(in_ECX + 0xe4) = 1;
    *(undefined4 *)(in_ECX + 0xe0) = 1;
  }
  local_8 = 1;
  if ((*(int *)(in_ECX + 0x17c) != 1) || (*(int *)(in_ECX + 0x178) != 1)) {
    *(undefined4 *)(in_ECX + 0x180) = 0x40;
    FUN_00403500(0x40,*(char *)(in_ECX + 0x20c) != '\0');
    piVar1 = *(int **)(in_ECX + 0x188);
    *(int **)(in_ECX + 0x184) = piVar1;
    *piVar1 = (int)(piVar1 + 4);
    *(undefined4 *)(*(int *)(in_ECX + 0x184) + 4) = 0;
    *(undefined4 *)(in_ECX + 0x17c) = 1;
    *(undefined4 *)(in_ECX + 0x178) = 1;
  }
  ExceptionList = local_10;
  return;
}

