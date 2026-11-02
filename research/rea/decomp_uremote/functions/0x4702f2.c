// rea decompile_all
// name: FUN_004702f2
// address: 0x4702f2
// body: available
// range: 0x4702f2-0x470644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004702f2(void)

{
  double *pdVar1;
  int *piVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 *unaff_EBX;
  float10 fVar8;
  int local_54;
  uint local_50;
  int local_4c;
  undefined4 local_44;
  double local_38;
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  double local_20 [2];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_20[0] = 0.0;
  local_38 = -NAN;
  local_30 = 0.0;
  local_20[1] = 0.0;
  uStack_10 = 0;
  uStack_c = 0;
  local_28 = 0;
  uStack_24 = 0;
  bVar5 = false;
  bVar4 = false;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_00460973();
  *unaff_EBX = local_44;
  iVar6 = FUN_00460791();
  if (iVar6 == 0x2b) {
LAB_00470370:
    FUN_004607e3();
    iVar6 = FUN_00460791();
  }
  else if (iVar6 == 0x2d) {
    bVar5 = true;
    goto LAB_00470370;
  }
  uVar7 = local_50;
  if (iVar6 == 0x49) {
LAB_004703d7:
    iVar6 = FUN_0046085c();
    if (((iVar6 == 0x6e) || (iVar6 = FUN_0046085c(), iVar6 == 0x4e)) &&
       ((iVar6 = FUN_0046085c(), iVar6 == 0x66 || (iVar6 = FUN_0046085c(), iVar6 == 0x46)))) {
      return (float10)_DAT_00957470;
    }
  }
  else {
    if (iVar6 != 0x4e) {
      if (iVar6 == 0x69) goto LAB_004703d7;
      if (iVar6 != 0x6e) goto LAB_00470417;
    }
    iVar6 = FUN_0046085c();
    if (((iVar6 == 0x61) || (iVar6 = FUN_0046085c(), iVar6 == 0x41)) &&
       ((iVar6 = FUN_0046085c(), iVar6 == 0x6e || (iVar6 = FUN_0046085c(), iVar6 == 0x4e)))) {
      return (float10)_DAT_00957480;
    }
  }
LAB_00470417:
  do {
    while (local_50 = uVar7, (byte)(*(char *)*unaff_EBX - 0x30U) < 10) {
      iVar6 = FUN_0044eba8();
      uVar7 = iVar6 - 0x30;
      bVar4 = true;
      if ((local_4c != 0) || (uVar7 != 0)) {
        local_4c = local_4c + 1;
        if (local_4c < 0x12) {
          pdVar1 = &local_30 + local_54;
          if (429496728.0 < *pdVar1) {
            fVar8 = (float10)FUN_00464fec(local_20[local_54]);
            dVar3 = *pdVar1;
            *(undefined4 *)((int)&local_38 + local_54 * 4) = 0;
            local_20[local_54] = (double)(fVar8 + (float10)dVar3);
            *pdVar1 = 0.0;
          }
          dVar3 = *pdVar1;
          piVar2 = (int *)((int)&local_38 + local_54 * 4);
          *piVar2 = *piVar2 + 1;
          *pdVar1 = dVar3 * 10.0 + (double)(int)uVar7;
        }
        else {
          if ((5 < (int)uVar7) || ((uVar7 == 5 && ((local_50 & 1) != 0)))) {
            (&local_30)[local_54] = (&local_30)[local_54] + 1.0;
          }
          while ((byte)(*(char *)*unaff_EBX - 0x30U) < 10) {
            FUN_004607e3();
          }
        }
      }
    }
    if ((local_54 != 0) || (iVar6 = FUN_00460791(), iVar6 != 0x2e)) goto LAB_00470542;
    FUN_004607e3();
    local_54 = 1;
    uVar7 = local_50;
  } while (local_4c < 0x12);
  while ((byte)(*(char *)*unaff_EBX - 0x30U) < 10) {
    FUN_004607e3();
  }
LAB_00470542:
  fVar8 = (float10)FUN_00464fec(local_20[0]);
  local_20[0] = (double)(fVar8 + (float10)local_30);
  if (local_54 != 0) {
    fVar8 = (float10)FUN_00464fec(local_20[1]);
    local_20[1] = (double)(fVar8 + (float10)(double)CONCAT44(uStack_24,local_28));
  }
  iVar6 = FUN_00460791();
  if (((iVar6 == 0x65) || (iVar6 == 0x45)) && (bVar4)) {
    FUN_004607e3();
    iVar6 = FUN_00460791();
    if ((iVar6 == 0x2b) || (iVar6 == 0x2d)) {
      FUN_004607e3();
    }
    while ((byte)(*(char *)*unaff_EBX - 0x30U) < 10) {
      FUN_0044eba8();
    }
  }
  fVar8 = (float10)FUN_00464fec(local_20[0]);
  local_38 = (double)fVar8;
  if (local_54 != 0) {
    fVar8 = (float10)FUN_00464fec(local_20[1]);
    fVar8 = fVar8 + (float10)local_38;
  }
  if (bVar5) {
    fVar8 = -fVar8;
  }
  return fVar8;
}

