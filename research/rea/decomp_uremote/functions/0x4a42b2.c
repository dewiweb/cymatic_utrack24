// rea decompile_all
// name: FUN_004a42b2
// address: 0x4a42b2
// body: available
// range: 0x4a42b2-0x4a44e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004a42b2(UINT param_1)

{
  float fVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  _GLYPHMETRICS local_44;
  int *local_30;
  int *local_2c;
  int *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x4a42be;
  if ((int)param_1 < 0) {
    param_1 = *(UINT *)(in_ECX + 0x80);
  }
  local_1c = (float)GetGlyphOutlineW(*(HDC *)(in_ECX + 0x34),param_1,0x82,&local_44,0,(LPVOID)0x0,
                                     (MAT2 *)&DAT_005ff9f8);
  if (0 < (int)local_1c) {
    local_2c = _malloc((size_t)local_1c);
    local_8 = 0;
    GetGlyphOutlineW(*(HDC *)(in_ECX + 0x34),param_1,0x82,&local_44,(DWORD)local_1c,local_2c,
                     (MAT2 *)&DAT_005ff9f8);
    fVar1 = 1.0 / (float)*(int *)(in_ECX + 0x38);
    local_30 = (int *)((int)local_1c + (int)local_2c);
    local_14 = -fVar1;
    piVar4 = local_2c;
    if (local_2c < local_30) {
      do {
        local_28 = (int *)((float)(int)*(short *)((int)piVar4 + 10) * fVar1);
        FUN_00478b0d(local_28,(float)(int)*(short *)((int)piVar4 + 0xe) * local_14);
        piVar3 = (int *)(*piVar4 + (int)piVar4);
        local_28 = piVar3;
        for (piVar4 = piVar4 + 4; piVar4 < piVar3;
            piVar4 = piVar4 + (uint)*(ushort *)((int)piVar4 + 2) * 2 + 1) {
          if ((short)*piVar4 == 1) {
            iVar6 = 0;
            if (*(short *)((int)piVar4 + 2) != 0) {
              psVar5 = (short *)((int)piVar4 + 6);
              do {
                local_24 = (float)(int)*psVar5 * fVar1;
                FUN_00478ba1(local_24,(float)(int)psVar5[2] * local_14);
                iVar6 = iVar6 + 1;
                psVar5 = psVar5 + 4;
                piVar3 = local_28;
              } while (iVar6 < (int)(uint)*(ushort *)((int)piVar4 + 2));
            }
          }
          else if ((short)*piVar4 == 2) {
            uVar2 = (uint)*(ushort *)((int)piVar4 + 2);
            iVar6 = 0;
            if (uVar2 != 1 && -1 < (int)(uVar2 - 1)) {
              psVar5 = (short *)((int)piVar4 + 10);
              do {
                local_24 = (float)(int)psVar5[-2] * fVar1;
                local_20 = (float)(int)*psVar5 * local_14;
                local_1c = (float)(int)psVar5[2] * fVar1;
                local_18 = (float)(int)psVar5[4] * local_14;
                if (iVar6 < (int)(uVar2 - 2)) {
                  local_1c = (local_1c + local_24) * 0.5;
                  local_18 = (local_18 + local_20) * 0.5;
                }
                FUN_00478c33(local_24,local_20,local_1c,local_18);
                uVar2 = (uint)*(ushort *)((int)piVar4 + 2);
                iVar6 = iVar6 + 1;
                psVar5 = psVar5 + 4;
                piVar3 = local_28;
              } while (iVar6 < (int)(uVar2 - 1));
            }
          }
        }
        FUN_00478e1f();
      } while (piVar4 < local_30);
    }
    local_8 = 0xffffffff;
    _free(local_2c);
  }
  return 1;
}

