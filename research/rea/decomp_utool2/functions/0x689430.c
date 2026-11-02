// rea decompile_all
// name: FUN_00689430
// address: 0x689430
// body: available
// range: 0x689430-0x6895f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00689430(int param_1)

{
  void **ppvVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00721088;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  ppvVar1 = &local_10;
  local_18 = in_ECX;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar1;
    if (in_ECX == (int *)0x0) {
LAB_0068955d:
      local_8 = 1;
      iVar4 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                           &juce::JUCEApplication::RTTI_Type_Descriptor,0);
      if ((iVar4 != 0) && (in_ECX = (int *)(iVar4 + 0x10), in_ECX != (int *)0x0)) {
        local_24 = (int *)0x0;
        local_20 = 0;
        local_1c = 0;
        local_8 = 2;
        (**(code **)(*in_ECX + 8))(&local_24);
        for (piVar3 = local_24; piVar3 != local_24 + local_1c; piVar3 = piVar3 + 1) {
          if (param_1 == *piVar3) {
LAB_00689526:
            FID_conflict__free(local_24);
            ExceptionList = local_10;
            return in_ECX;
          }
        }
        FID_conflict__free(local_24);
      }
      ExceptionList = local_10;
      return (int *)0x0;
    }
    local_24 = (int *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_8 = 0;
    if ((undefined **)*in_ECX == PlaylistEditorApplication::vftable) {
      local_24 = (int *)FUN_004c554b(0x20);
      local_20 = 8;
      piVar3 = local_24 + local_1c;
      local_1c = local_1c + 1;
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0x1001;
      }
    }
    else {
      (*(code *)((undefined **)*in_ECX)[2])(&local_24,uVar2);
    }
    for (piVar3 = local_24; piVar3 != local_24 + local_1c; piVar3 = piVar3 + 1) {
      if (param_1 == *piVar3) goto LAB_00689526;
    }
    if ((undefined **)*in_ECX == PlaylistEditorApplication::vftable) {
      in_ECX = (int *)0x0;
    }
    else {
      in_ECX = (int *)(*(code *)((undefined **)*in_ECX)[1])();
    }
    local_14 = local_14 + 1;
    if ((100 < local_14) || (in_ECX == local_18)) {
      local_8 = 0xffffffff;
      FID_conflict__free(local_24);
      if (in_ECX != (int *)0x0) {
        ExceptionList = local_10;
        return (int *)0x0;
      }
      goto LAB_0068955d;
    }
    FID_conflict__free(local_24);
    ppvVar1 = ExceptionList;
  } while( true );
}

