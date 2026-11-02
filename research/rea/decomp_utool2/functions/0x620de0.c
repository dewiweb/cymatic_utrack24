// rea decompile_all
// name: FUN_00620de0
// address: 0x620de0
// body: available
// range: 0x620de0-0x620efd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00620de0(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d279;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar1 = (char *)*in_ECX;
  if (*pcVar1 == '\0') {
    FUN_00622070();
    FUN_00621710(in_ECX);
    ExceptionList = local_10;
    return param_1;
  }
  piVar6 = (int *)(pcVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_14 = pcVar1;
  iVar4 = FUN_00426f70(uVar3);
  pcVar7 = pcVar1;
  if (iVar4 != 0x22) {
    uVar8 = extraout_ECX;
    FUN_00622070(extraout_ECX);
    puVar5 = (undefined4 *)FUN_00637730(uVar8);
    pcVar7 = (char *)*puVar5;
    *puVar5 = pcVar1;
    piVar6 = (int *)(local_18 + -8);
    local_14 = pcVar7;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  cVar2 = FUN_00632d50(0x22);
  if (cVar2 == '\0') {
    local_1c = 0x22;
    local_18 = 0;
    FUN_0045dfc0(&local_1c,0xffffffff);
    pcVar7 = local_14;
  }
  *param_1 = pcVar7;
  ExceptionList = local_10;
  return param_1;
}

