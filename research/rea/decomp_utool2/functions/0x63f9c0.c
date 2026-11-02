// rea decompile_all
// name: FUN_0063f9c0
// address: 0x63f9c0
// body: available
// range: 0x63f9c0-0x63fba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063f9c0(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  int in_EDX;
  int iVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071fa41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_8 = 0;
  cVar4 = FUN_0063fbb0(param_1,param_2,&local_18,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar4 != '\0') {
    local_14 = 0;
    (**(code **)(*local_18 + 0xec))(local_18,0,0,&local_14);
    if (in_ECX[1] < local_14) {
      FUN_00409cf0(local_14 / 2 + local_14 + 8 & 0xfffffff8);
    }
    piVar5 = operator_new(0x18);
    piVar5[1] = 0;
    *piVar5 = (int)juce::DirectWriteTypeLayout::CustomDirectWriteTextRenderer::vftable;
    piVar5[2] = in_EDX;
    piVar5[3] = param_2;
    piVar5[4] = -1;
    piVar5[5] = -0x39e3c000;
    FUN_00432da0(piVar5);
    local_8._0_1_ = 2;
    (**(code **)(*local_18 + 0xe8))(local_18);
    local_8._0_1_ = 3;
    if ((undefined **)*piVar5 == juce::DirectWriteTypeLayout::CustomDirectWriteTextRenderer::vftable
       ) {
      piVar5 = piVar5 + 1;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        FUN_0046b6a0(1);
      }
    }
    else {
      (*(code *)((undefined **)*piVar5)[2])(piVar5);
    }
    piVar5 = (int *)FUN_004c554b(local_14 * 0x18);
    local_8 = CONCAT31(local_8._1_3_,4);
    (**(code **)(*local_18 + 0xec))(local_18,piVar5,local_14,&local_14);
    iVar9 = 0;
    iVar7 = local_14;
    if (in_ECX[2] < local_14) {
      iVar7 = in_ECX[2];
    }
    local_1c = 0;
    fVar1 = *(float *)(in_EDX + 4);
    if (0 < iVar7) {
      fVar10 = 0.0;
      piVar8 = piVar5;
      do {
        iVar2 = *(int *)(*in_ECX + local_1c * 4);
        iVar3 = *piVar8;
        *(int *)(iVar2 + 0xc) = iVar9;
        iVar6 = iVar9;
        if (iVar9 < iVar3 + iVar9) {
          iVar6 = iVar3 + iVar9;
        }
        *(int *)(iVar2 + 0x10) = iVar6;
        local_1c = local_1c + 1;
        *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar10;
        iVar9 = iVar9 + *piVar8;
        fVar10 = fVar10 + fVar1;
        piVar8 = piVar8 + 6;
      } while (local_1c < iVar7);
    }
    FID_conflict__free(piVar5);
  }
  local_8 = 5;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  ExceptionList = local_10;
  return;
}

