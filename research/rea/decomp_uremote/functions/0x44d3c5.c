// rea decompile_all
// name: FUN_0044d3c5
// address: 0x44d3c5
// body: available
// range: 0x44d3c5-0x44d690 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044d3c5(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = *unaff_ESI;
  iVar3 = iVar4 * unaff_ESI[3];
  local_c = (float)unaff_ESI[1];
  unaff_ESI[6] = iVar3;
  local_10 = (float)((int)local_c * unaff_ESI[3]);
  local_14 = (float)iVar3 / (float)unaff_ESI[2];
  unaff_ESI[7] = (int)local_10;
  unaff_ESI[8] = (int)local_14;
  local_18 = (float)(int)local_10 / (float)unaff_ESI[2];
  unaff_ESI[9] = (int)local_18;
  unaff_ESI[10] = (int)(local_14 * 2.54);
  unaff_ESI[0xb] = (int)(local_18 * 2.54);
  unaff_ESI[0xc] = (int)((float)(int)local_c / (float)iVar4);
  local_8 = (float)iVar4;
  local_18 = (float)FUN_00439b5a(iVar4);
  local_14 = (float)(int)local_18;
  iVar4 = FUN_00440367(iVar4);
  local_10 = local_14 / (float)iVar4;
  local_18 = local_10 - 1.3333334;
  fVar5 = (float10)FUN_00474d74(local_18);
  local_14 = (float)fVar5;
  local_18 = local_10 - 1.6666666;
  fVar5 = (float10)FUN_00474d74(local_18);
  local_18 = (float)fVar5;
  local_c = local_10 - 1.25;
  fVar5 = (float10)FUN_00474d74(local_c);
  local_c = (float)fVar5;
  local_8 = local_10 - 1.7777778;
  fVar5 = (float10)FUN_00474d74(local_8);
  local_8 = (float)fVar5;
  local_10 = local_10 - 1.6;
  fVar5 = (float10)FUN_00474d74(local_10);
  fVar2 = local_14;
  local_10 = (float)fVar5;
  fVar5 = (float10)FUN_0044dccd(local_18,local_c,local_8,local_10);
  fVar1 = local_18;
  if ((((fVar5 <= (float10)fVar2) &&
       (fVar5 = (float10)FUN_0044dccd(local_14,local_c,local_8,local_10), fVar2 = local_c,
       fVar5 <= (float10)fVar1)) &&
      (fVar5 = (float10)FUN_0044dccd(local_14,local_18,local_8,local_10), fVar1 = local_8,
      fVar5 <= (float10)fVar2)) &&
     (fVar5 = (float10)FUN_0044dccd(local_14,local_c,local_c,local_10), fVar5 <= (float10)fVar1)) {
    FUN_0044dccd(local_14,local_c,local_8,local_8);
  }
  FUN_0046537e(&local_18);
  FUN_00465317(unaff_ESI + 0xd);
  FUN_004652d6();
  local_18 = (float)unaff_ESI[8] * (float)unaff_ESI[8] + (float)unaff_ESI[9] * (float)unaff_ESI[9];
  fVar5 = (float10)FUN_0044bfab(local_18);
  if (6.0 <= (float)fVar5) {
    if (14.0 <= (float)fVar5) {
      unaff_ESI[0xe] = 2;
      return;
    }
    unaff_ESI[0xe] = 1;
    return;
  }
  unaff_ESI[0xe] = 0;
  return;
}

