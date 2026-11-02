// rea decompile_all
// name: FUN_0047b2fa
// address: 0x47b2fa
// body: available
// range: 0x47b2fa-0x47b416 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0047b2fa(void)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  
  uVar4 = in_ECX[8];
  iVar5 = *(int *)in_ECX[7];
  if ((uint)((int *)in_ECX[7])[2] <= uVar4) {
    return uVar4 & 0xffffff00;
  }
  fVar2 = *(float *)(iVar5 + uVar4 * 4);
  iVar1 = uVar4 + 1;
  in_ECX[8] = iVar1;
  if (fVar2 == 100002.0) {
    *in_ECX = 0;
LAB_0047b34a:
    iVar6 = uVar4 + 2;
    uVar3 = *(undefined4 *)(iVar5 + iVar1 * 4);
    in_ECX[8] = iVar6;
    in_ECX[1] = uVar3;
    in_ECX[2] = *(undefined4 *)(iVar5 + iVar6 * 4);
  }
  else {
    if (fVar2 == 100001.0) {
      *in_ECX = 1;
      goto LAB_0047b34a;
    }
    if (fVar2 == 100003.0) {
      *in_ECX = 2;
      uVar3 = *(undefined4 *)(iVar5 + iVar1 * 4);
      in_ECX[8] = uVar4 + 2;
      in_ECX[1] = uVar3;
      in_ECX[2] = *(undefined4 *)(iVar5 + (uVar4 + 2) * 4);
      in_ECX[8] = uVar4 + 3;
      iVar6 = uVar4 + 4;
      in_ECX[3] = *(undefined4 *)(iVar5 + (uVar4 + 3) * 4);
      in_ECX[8] = iVar6;
      in_ECX[4] = *(undefined4 *)(iVar5 + iVar6 * 4);
    }
    else {
      if (fVar2 != 100004.0) {
        iVar6 = CONCAT22((short)(uVar4 >> 0x10),
                         (ushort)(100005.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                         (ushort)(fVar2 == 100005.0) << 0xe);
        if (fVar2 == 100005.0) {
          *in_ECX = 4;
        }
        goto LAB_0047b40e;
      }
      *in_ECX = 3;
      uVar3 = *(undefined4 *)(iVar5 + iVar1 * 4);
      in_ECX[8] = uVar4 + 2;
      in_ECX[1] = uVar3;
      uVar3 = *(undefined4 *)(iVar5 + (uVar4 + 2) * 4);
      in_ECX[8] = uVar4 + 3;
      in_ECX[2] = uVar3;
      uVar3 = *(undefined4 *)(iVar5 + (uVar4 + 3) * 4);
      in_ECX[8] = uVar4 + 4;
      in_ECX[3] = uVar3;
      in_ECX[4] = *(undefined4 *)(iVar5 + (uVar4 + 4) * 4);
      in_ECX[8] = uVar4 + 5;
      iVar6 = uVar4 + 6;
      in_ECX[5] = *(undefined4 *)(iVar5 + (uVar4 + 5) * 4);
      in_ECX[8] = iVar6;
      in_ECX[6] = *(undefined4 *)(iVar5 + iVar6 * 4);
    }
  }
  iVar6 = iVar6 + 1;
  in_ECX[8] = iVar6;
LAB_0047b40e:
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

