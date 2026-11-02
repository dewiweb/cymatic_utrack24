// rea decompile_all
// name: FUN_0044cfd6
// address: 0x44cfd6
// body: available
// range: 0x44cfd6-0x44d25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044cfd6(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_ESI;
  undefined1 *puVar7;
  float fVar8;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  float local_1c;
  float local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x44cfe2;
  FUN_0044d3b0(param_2);
  FUN_0043d2e1(*(undefined4 *)(unaff_ESI + 0x68),*(undefined4 *)(unaff_ESI + 0x6c));
  local_18 = *(float *)(unaff_ESI + 0x4c);
  iVar4 = FUN_005b3fb0();
  local_18 = *(float *)(unaff_ESI + 0x40);
  piVar1 = (int *)(unaff_ESI + 4);
  *piVar1 = iVar4;
  *(int *)(unaff_ESI + 8) = iVar4;
  if (iVar4 * 10 - (int)local_18 != 0 && (int)local_18 <= iVar4 * 10) {
    *piVar1 = (int)local_18 / 10;
  }
  iVar4 = *(int *)(unaff_ESI + 0x44);
  if (*piVar1 * 6 - iVar4 != 0 && iVar4 <= *piVar1 * 6) {
    *piVar1 = iVar4 / 10;
  }
  iVar4 = *piVar1;
  if (*(int *)(unaff_ESI + 0x78) != 2) {
    iVar4 = FUN_005b3fb0();
  }
  *(int *)(unaff_ESI + 8) = iVar4;
  iVar4 = FUN_005b3fb0();
  piVar2 = (int *)(unaff_ESI + 0xc);
  *piVar2 = iVar4;
  uVar5 = FUN_005b3fb0();
  *(undefined4 *)(unaff_ESI + 0x10) = uVar5;
  uVar5 = FUN_005b3fb0();
  *(undefined4 *)(unaff_ESI + 0x14) = uVar5;
  if (*(int *)(unaff_ESI + 0x78) == 0) {
    *piVar2 = iVar4 / 2;
  }
  local_18 = (float)(int)local_18 * 0.45;
  do {
    iVar4 = FUN_005b3fb0();
    fVar3 = (float)iVar4;
    puVar7 = local_20;
    fVar8 = fVar3 * 0.4;
    local_1c = fVar8;
    FUN_0044bfc5(puVar7,fVar8);
    FUN_0049f81a(puVar7,fVar8);
    FUN_0049f5e8();
    FUN_004c4d7a();
    fVar8 = fVar3 * 0.7;
    puVar7 = local_24;
    local_1c = fVar8;
    FUN_0044bfc5(puVar7,fVar8);
    FUN_0049f81a(puVar7,fVar8);
    FUN_0049f5e8();
    FUN_004c4d7a();
    local_1c = (float)*piVar2;
    *(float *)(unaff_ESI + 0x18) = local_1c;
    *(float *)(unaff_ESI + 0x1c) = (float)((*piVar1 - iVar4) / 2);
    *(float *)(unaff_ESI + 0x20) = fVar3;
    *(float *)(unaff_ESI + 0x24) = fVar3;
    FUN_0046537e(local_14);
    local_8 = 0;
    uVar5 = *(undefined4 *)(unaff_ESI + 0x24);
    local_1c = *(float *)(unaff_ESI + 0x1c);
    fVar3 = *(float *)(unaff_ESI + 0x20);
    fVar8 = *(float *)(unaff_ESI + 0x18);
    iVar4 = *piVar2;
    iVar6 = FUN_0049fa60(local_14);
    local_8 = 0xffffffff;
    *(float *)(unaff_ESI + 0x28) = (float)iVar4 + fVar3 + fVar8;
    *(float *)(unaff_ESI + 0x2c) = local_1c;
    *(float *)(unaff_ESI + 0x30) = (float)*piVar1 * 0.5 + (float)iVar6;
    *(undefined4 *)(unaff_ESI + 0x34) = uVar5;
    FUN_004652d6();
    fVar3 = *(float *)(unaff_ESI + 0x28) + *(float *)(unaff_ESI + 0x30);
    if (local_18 < fVar3) {
      iVar4 = FUN_005b3fb0();
      *piVar1 = iVar4;
    }
  } while (local_18 < fVar3);
  return;
}

