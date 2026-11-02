// rea decompile_all
// name: FUN_004a1ded
// address: 0x4a1ded
// body: available
// range: 0x4a1ded-0x4a1edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1ded(float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_ESI;
  float10 fVar5;
  float local_10;
  float local_c;
  float local_8;
  
  local_c = 0.0;
  uVar4 = 0;
  local_10 = 0.0;
  local_8 = 0.0;
  if (0 < unaff_ESI[2]) {
    do {
      iVar3 = *(int *)(*unaff_ESI + uVar4 * 4);
      *(float *)(iVar3 + 0xc) = local_c;
      *(float *)(iVar3 + 0x10) = local_10;
      *(int *)(iVar3 + 0x1c) = unaff_ESI[3];
      local_c = *(float *)(iVar3 + 0x14) + local_c;
      fVar5 = (float10)FUN_0043bcfe(local_8,*(undefined4 *)(iVar3 + 0x18));
      local_8 = (float)fVar5;
      uVar1 = uVar4 + 1;
      if (uVar1 < (uint)unaff_ESI[2]) {
        iVar2 = *(int *)(*unaff_ESI + 4 + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 == 0) break;
      if ((*(char *)(iVar3 + 0x25) != '\0') ||
         ((*(char *)(iVar2 + 0x24) == '\0' && (param_1 < *(float *)(iVar2 + 0x14) + local_c)))) {
        while ((-1 < (int)uVar4 &&
               (iVar3 = *(int *)(*unaff_ESI + uVar4 * 4), *(int *)(iVar3 + 0x1c) == unaff_ESI[3])))
        {
          uVar4 = uVar4 - 1;
          *(float *)(iVar3 + 0x20) = local_8;
        }
        unaff_ESI[3] = unaff_ESI[3] + 1;
        local_c = 0.0;
        local_10 = local_8 + local_10;
        local_8 = 0.0;
      }
      uVar4 = uVar1;
    } while ((int)uVar1 < unaff_ESI[2]);
  }
  iVar3 = FUN_00440367(uVar4 + 1);
  while ((iVar3 = iVar3 + -1, -1 < iVar3 &&
         (iVar2 = *(int *)(*unaff_ESI + iVar3 * 4), *(int *)(iVar2 + 0x1c) == unaff_ESI[3]))) {
    *(float *)(iVar2 + 0x20) = local_8;
  }
  unaff_ESI[3] = unaff_ESI[3] + 1;
  return;
}

