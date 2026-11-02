// rea decompile_all
// name: FUN_004797e4
// address: 0x4797e4
// body: available
// range: 0x4797e4-0x4799d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004797e4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  float10 fVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined4 extraout_var_00;
  undefined4 uVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  fVar1 = param_3 * 0.5;
  fVar2 = param_4 * 0.5;
  FUN_004a4a67(fVar1,fVar2,param_5);
  FUN_00478b88(extraout_var,extraout_var_00);
  FUN_00479614(unaff_EBX,param_1,param_2,param_3,param_4,param_5,param_6);
  fVar3 = (float10)FUN_00474d74(param_5 - param_6);
  if (fVar3 <= (float10)6.280043601989746) {
    if (param_7 <= 0.0) {
      FUN_00478c1a(fVar1 + param_1,fVar2 + param_2);
      goto LAB_004799cd;
    }
  }
  else {
    FUN_00478e1f();
    if (param_7 <= 0.0) goto LAB_004799cd;
    uVar4 = extraout_ECX;
    uVar5 = extraout_ECX;
    FUN_004a4a67(fVar1 * param_7,fVar2 * param_7,param_6);
    FUN_00478b88(uVar4,uVar5);
  }
  local_c = fVar2 * param_7;
  local_10 = fVar1 * param_7;
  FUN_00479614(unaff_EBX,(fVar1 + param_1) - local_10,(fVar2 + param_2) - local_c,local_10 * 2.0,
               local_c * 2.0,param_6,param_5);
LAB_004799cd:
  FUN_00478e1f();
  return;
}

