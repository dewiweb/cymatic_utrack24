// rea decompile_all
// name: FUN_0047c254
// address: 0x47c254
// body: available
// range: 0x47c254-0x47c465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c254(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 != 0) {
    fVar3 = (float10)FUN_00474e19(param_4 - param_2,param_5 - param_3);
    if ((float)fVar3 == 0.0) {
      local_c = param_2;
      local_10 = param_2;
      local_8 = param_3;
      local_14 = param_3;
    }
    else {
      param_6 = param_6 / (float)fVar3;
      local_8 = param_6 * (param_4 - param_2);
      param_6 = param_6 * (param_5 - param_3);
      local_10 = param_6 + param_2;
      local_14 = param_3 - local_8;
      local_c = param_6 + param_4;
      local_8 = param_5 - local_8;
    }
    if (param_1 != 1) {
      fVar1 = (local_10 + local_c) * 0.5;
      fVar2 = (local_14 + local_8) * 0.5;
      FUN_00478d07((local_10 - param_2) * 0.55 + param_2,param_3 + (local_14 - param_3) * 0.55,
                   local_10 + (fVar1 - local_10) * 0.45,local_14 + (fVar2 - local_14) * 0.45,fVar1,
                   fVar2);
      FUN_00478d07((local_c - fVar1) * 0.55 + fVar1,fVar2 + (local_8 - fVar2) * 0.55,
                   (param_4 - local_c) * 0.45 + local_c,local_8 + (param_5 - local_8) * 0.45,param_4
                   ,param_5);
      return;
    }
    FUN_00478ba1(local_10,local_14);
    FUN_00478ba1(local_c,local_8);
  }
  FUN_00478ba1(param_4,param_5);
  return;
}

