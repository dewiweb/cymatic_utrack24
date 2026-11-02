// rea decompile_all
// name: FUN_00452ac0
// address: 0x452ac0
// body: available
// range: 0x452ac0-0x452c44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00452ac0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  void *_Memory;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  undefined **local_2c;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffec8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_14 = in_ECX;
  if (0x100 < (int)param_3) {
    FUN_0045c990("Recursive symbol references",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    uStack_24._4_4_ = param_2;
    piVar2 = param_2 + -2;
    local_28 = 0;
    uStack_24._0_4_ = 0;
    local_2c = juce::Expression::Helpers::EvaluationError::vftable;
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    in_ECX = __CxxThrowException_8(&local_2c,&DAT_00c4d140);
  }
  iVar1 = *(int *)(in_ECX + 0x14);
  if (iVar1 < 1) {
    fVar5 = (float10)(**(code **)(*param_2 + 0xc))(in_ECX + 8,0,0);
    uStack_24 = (double)fVar5;
  }
  else {
    _Memory = (void *)FUN_004c554b(iVar1 * 8);
    iVar4 = 0;
    local_8 = 1;
    uStack_24._4_4_ = _Memory;
    if (0 < iVar1) {
      local_18 = (int)param_3 + 1;
      do {
        puVar3 = (undefined4 *)
                 (**(code **)(**(int **)(*(int *)(local_14 + 0xc) + iVar4 * 4) + 0xc))
                           (&param_3,param_2,local_18);
        local_8._0_1_ = 2;
        fVar5 = (float10)(**(code **)(*(int *)*puVar3 + 0x14))();
        *(double *)((int)_Memory + iVar4 * 8) = (double)fVar5;
        local_8 = CONCAT31(local_8._1_3_,1);
        if (param_3 != (undefined4 *)0x0) {
          piVar2 = param_3 + 1;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*param_3)(1);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    fVar5 = (float10)(**(code **)(*param_2 + 0xc))(local_14 + 8,_Memory,iVar1);
    uStack_24 = (double)fVar5;
    local_8 = 0xffffffff;
    FID_conflict__free(_Memory);
  }
  puVar3 = operator_new(0x18);
  *puVar3 = juce::Expression::Helpers::Constant::vftable;
  *(double *)(puVar3 + 2) = uStack_24;
  *(undefined1 *)(puVar3 + 4) = 0;
  *param_1 = puVar3;
  puVar3[1] = 1;
  ExceptionList = local_10;
  return;
}

