// rea decompile_all
// name: FUN_0047a107
// address: 0x47a107
// body: available
// range: 0x47a107-0x47a291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a107(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  iVar4 = *param_2;
  if (param_2[2] != 0) {
    local_c = (undefined4 *)(iVar4 + 0x10);
    local_8 = (undefined4 *)(iVar4 + 0x14);
    local_10 = (undefined4 *)(iVar4 + 8);
    uVar6 = 0;
    puVar8 = (undefined4 *)(iVar4 + 0xc);
    do {
      fVar3 = *(float *)(iVar4 + uVar6 * 4);
      puVar1 = local_8 + 1;
      puVar2 = local_c + 1;
      puVar9 = puVar8 + 1;
      puVar5 = local_10 + 1;
      uVar7 = uVar6 + 1;
      if (fVar3 == 100002.0) {
        FUN_00478b0d(*(undefined4 *)(iVar4 + uVar7 * 4),*(undefined4 *)(iVar4 + 4 + uVar7 * 4));
        puVar9 = puVar8 + 3;
        uVar7 = uVar6 + 3;
        local_10 = local_10 + 3;
        local_c = local_c + 3;
        local_8 = local_8 + 3;
      }
      else {
        if (fVar3 == 100001.0) {
          FUN_00478ba1(*(undefined4 *)(iVar4 + uVar7 * 4),*(undefined4 *)(iVar4 + 4 + uVar7 * 4));
          uVar7 = uVar6 + 3;
          iVar10 = 8;
        }
        else if (fVar3 == 100003.0) {
          FUN_00478c33(*(undefined4 *)(iVar4 + uVar7 * 4),*(undefined4 *)(iVar4 + 4 + uVar7 * 4),
                       *puVar5,*puVar9);
          uVar7 = uVar6 + 5;
          iVar10 = 0x10;
        }
        else {
          if (fVar3 != 100004.0) {
            local_10 = puVar5;
            local_c = puVar2;
            local_8 = puVar1;
            if (fVar3 == 100005.0) {
              FUN_00478e1f();
            }
            goto LAB_0047a27f;
          }
          FUN_00478d07(*(undefined4 *)(iVar4 + uVar7 * 4),*(undefined4 *)(iVar4 + 4 + uVar7 * 4),
                       *puVar5,*puVar9,*puVar2,*puVar1);
          uVar7 = uVar6 + 7;
          iVar10 = 0x18;
        }
        puVar9 = (undefined4 *)((int)puVar9 + iVar10);
        local_10 = (undefined4 *)((int)puVar5 + iVar10);
        local_c = (undefined4 *)((int)puVar2 + iVar10);
        local_8 = (undefined4 *)((int)puVar1 + iVar10);
      }
LAB_0047a27f:
      uVar6 = uVar7;
      puVar8 = puVar9;
    } while (uVar7 < (uint)param_2[2]);
  }
  return;
}

