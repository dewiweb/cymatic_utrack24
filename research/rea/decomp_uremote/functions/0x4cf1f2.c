// rea decompile_all
// name: FUN_004cf1f2
// address: 0x4cf1f2
// body: available
// range: 0x4cf1f2-0x4cf38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004cf1f2(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  int *unaff_EBX;
  float10 fVar6;
  float10 fVar7;
  int local_c;
  
  local_c = unaff_EBX[1];
  if (local_c == 0) {
    if (*unaff_EBX == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(*unaff_EBX + 8);
    }
  }
  if (local_c != 0) {
    unaff_EBX[8] = unaff_EBX[8] + param_1;
    dVar1 = (double)unaff_EBX[8] / (double)unaff_EBX[9];
    if ((!NAN(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) && (dVar1 < 1.0)) {
      fVar6 = (float10)FUN_004cf5b8(dVar1);
      fVar7 = (fVar6 - (float10)*(double *)(unaff_EBX + 0x10)) /
              ((float10)1 - (float10)*(double *)(unaff_EBX + 0x10));
      *(double *)(unaff_EBX + 0x10) = (double)fVar6;
      if (fVar7 < (float10)1) {
        bVar4 = false;
        if ((char)unaff_EBX[0x1c] != '\0') {
          dVar1 = (double)(((float10)unaff_EBX[2] - (float10)*(double *)(unaff_EBX + 0x12)) * fVar7
                          + (float10)*(double *)(unaff_EBX + 0x12));
          *(double *)(unaff_EBX + 0x12) = dVar1;
          dVar2 = (double)(((float10)unaff_EBX[3] - (float10)*(double *)(unaff_EBX + 0x14)) * fVar7
                          + (float10)*(double *)(unaff_EBX + 0x14));
          *(double *)(unaff_EBX + 0x14) = dVar2;
          *(double *)(unaff_EBX + 0x16) =
               (double)(((float10)(unaff_EBX[4] + unaff_EBX[2]) -
                        (float10)*(double *)(unaff_EBX + 0x16)) * fVar7 +
                       (float10)*(double *)(unaff_EBX + 0x16));
          dVar3 = (double)(((float10)(unaff_EBX[5] + unaff_EBX[3]) -
                           (float10)*(double *)(unaff_EBX + 0x18)) * fVar7 +
                          (float10)*(double *)(unaff_EBX + 0x18));
          *(double *)(unaff_EBX + 0x18) = dVar3;
          FUN_00470221(dVar1);
          FUN_00470221(dVar2);
          FUN_00470221(*(double *)(unaff_EBX + 0x16) - dVar1);
          FUN_00470221(dVar3 - dVar2);
          cVar5 = FUN_004f5c66();
          if (cVar5 != '\0') {
            FUN_004c0c1f();
            bVar4 = true;
          }
        }
        if (*(char *)((int)unaff_EBX + 0x71) != '\0') {
          *(double *)(unaff_EBX + 0x1a) =
               (*(double *)(unaff_EBX + 6) - *(double *)(unaff_EBX + 0x1a)) * (double)fVar7 +
               *(double *)(unaff_EBX + 0x1a);
          FUN_004c15a5();
          bVar4 = true;
        }
        if (bVar4) {
          return 1;
        }
      }
    }
  }
  FUN_004cf38f();
  return 0;
}

