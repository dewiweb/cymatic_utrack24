// rea decompile_all
// name: FUN_0047bf68
// address: 0x47bf68
// body: available
// range: 0x47bf68-0x47c253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047bf68(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13)

{
  char cVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float local_10;
  float local_c;
  float local_8;
  
  if (((param_1 != 2.8026e-45) && ((param_10 != param_8 || (param_11 != param_9)))) &&
     ((param_6 != param_4 || (param_7 != param_5)))) {
    cVar1 = FUN_0047bb47(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,&local_8)
    ;
    if (cVar1 != '\0') goto LAB_0047c059;
    if (param_1 != 0.0) {
      fVar2 = (float10)FUN_00474d8e(param_6 - param_12,param_7 - param_13);
      fVar3 = (float10)FUN_00474d8e(param_8 - param_12,param_9 - param_13);
      local_8 = (float)fVar3;
      FUN_00478ba1(param_6,param_7);
      fVar3 = (float10)FUN_00474d74((float)fVar2 - local_8);
      fVar4 = (float10)0.10000000149011612;
      local_10 = param_8;
      local_c = param_9;
      if (fVar4 < fVar3) {
        fVar3 = (float10)local_8;
        fVar2 = (float10)(float)fVar2;
        if ((fVar2 + (float10)3.1415927410125732 < fVar3) ||
           ((fVar3 < fVar2 && (fVar2 - (float10)3.1415927410125732 <= fVar3)))) {
          if (fVar2 < fVar3) {
            local_8 = (float)(fVar3 - (float10)6.2831854820251465);
            fVar3 = (float10)local_8;
          }
          param_1 = (float)(fVar2 - fVar4);
          if (fVar3 < (float10)param_1) {
            do {
              fVar2 = (float10)FUN_00474dcb(param_1);
              fVar5 = (float)(fVar2 * (float10)param_3 + (float10)param_13);
              fVar2 = (float10)FUN_00474dff(param_1,fVar5);
              FUN_00478ba1((float)(fVar2 * (float10)param_3 + (float10)param_12),fVar5);
              param_1 = param_1 - 0.1;
            } while (local_8 < param_1);
          }
        }
        else {
          if (fVar3 < fVar2) {
            fVar2 = (float10)(float)(fVar2 - (float10)6.2831854820251465);
          }
          param_1 = (float)(fVar2 + fVar4);
          if ((float10)param_1 < fVar3) {
            do {
              fVar2 = (float10)FUN_00474dcb(param_1);
              fVar5 = (float)(fVar2 * (float10)param_3 + (float10)param_13);
              fVar2 = (float10)FUN_00474dff(param_1,fVar5);
              FUN_00478ba1((float)(fVar2 * (float10)param_3 + (float10)param_12),fVar5);
              param_1 = param_1 + 0.1;
            } while (param_1 < local_8);
          }
        }
      }
      goto LAB_0047c059;
    }
    if ((local_8 < param_2) && (0.0 < local_8)) goto LAB_0047c059;
  }
  FUN_00478ba1(param_6,param_7);
  local_10 = param_8;
  local_c = param_9;
LAB_0047c059:
  FUN_00478ba1(local_10,local_c);
  return;
}

