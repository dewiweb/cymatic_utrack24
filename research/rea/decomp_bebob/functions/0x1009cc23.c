// rea decompile_all
// name: FUN_1009cc23
// address: 0x1009cc23
// body: available
// range: 0x1009cc23-0x1009ce62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HBITMAP__ * FUN_1009cc23(int param_1,undefined4 param_2,double *param_3,int param_4)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  float10 fVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  uint uVar12;
  undefined4 uStack_34;
  undefined8 local_30;
  double local_28;
  double local_20;
  HBITMAP__ *local_18;
  undefined8 local_14;
  double *local_c;
  void *local_8;
  
  local_18 = (HBITMAP__ *)0x0;
  if (param_1 != 0) {
    if (param_1 < 3) {
      param_1 = 3;
    }
    local_8 = (void *)0x0;
    iVar4 = param_1 * 2 + 1;
    local_30 = (double)CONCAT44(iVar4,iVar4);
    local_18 = CDrawingManager::CreateBitmap_32((CSize *)&local_30,&local_8);
    if ((local_18 == (HBITMAP__ *)0x0) || (local_8 == (void *)0x0)) {
      local_18 = (HBITMAP__ *)0x0;
    }
    else {
      uVar6 = iVar4 * iVar4;
      local_c = FUN_1000858a(-(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar6 * 8));
      local_20 = (double)(int)param_3 / 100.0;
      iVar4 = iVar4 / 2;
      local_30 = (double)param_4 / 100.0;
      local_28 = local_30 - local_20;
      uVar12 = SUB84((double)(int)uVar6 * 0.25,0);
      uStack_34 = (undefined4)((ulonglong)((double)(int)uVar6 * 0.25) >> 0x20);
      param_3 = local_c;
      for (iVar3 = -iVar4; iVar3 <= iVar4; iVar3 = iVar3 + 1) {
        dVar11 = (double)(iVar3 * iVar3);
        for (iVar1 = -iVar4; iVar1 <= iVar4; iVar1 = iVar1 + 1) {
          local_14 = (double)CONCAT44(iVar1 * iVar1,SUB84(local_14,0));
          dVar2 = (double)(iVar1 * iVar1) + dVar11;
          fVar7 = (float10)0;
          if (dVar2 <= (double)CONCAT44(uStack_34,uVar12)) {
            local_14 = (dVar2 / (double)CONCAT44(uStack_34,uVar12)) * -2.0;
            fVar7 = (float10)FUN_100fcfa0(SUB84(local_14,0),(uint)((ulonglong)local_14 >> 0x20));
            if (fVar7 * (float10)local_28 + (float10)local_20 <= (float10)local_20) {
              fVar7 = (float10)local_20;
            }
            else {
              fVar7 = (float10)FUN_100fcfa0(SUB84(local_14,0),(uint)((ulonglong)local_14 >> 0x20));
              fVar7 = fVar7 * (float10)local_28 + (float10)local_20;
            }
            uVar10 = (undefined4)((ulonglong)dVar11 >> 0x20);
            if (fVar7 <= (float10)local_30) {
              uVar9 = (uint)((ulonglong)local_14 >> 0x20);
              fVar7 = (float10)FUN_100fcfa0(SUB84(local_14,0),uVar9);
              dVar11 = (double)CONCAT44(uVar10,uVar9);
              if (fVar7 * (float10)local_28 + (float10)local_20 <= (float10)local_20) {
                fVar7 = (float10)local_20;
              }
              else {
                uVar9 = SUB84(local_14,0);
                uVar12 = (uint)((ulonglong)local_14 >> 0x20);
                uVar10 = 0x1009cd97;
                fVar7 = (float10)FUN_100fcfa0(uVar9,uVar12);
                dVar11 = (double)CONCAT44(uVar9,uVar10);
                fVar7 = fVar7 * (float10)local_28 + (float10)local_20;
              }
            }
            else {
              fVar7 = (float10)local_30;
            }
          }
          *param_3 = (double)fVar7;
          param_3 = param_3 + 1;
        }
      }
      if (0 < (int)uVar6) {
        puVar5 = (undefined1 *)((int)local_8 + 1);
        do {
          uVar8 = FUN_100f8696();
          puVar5[1] = (char)uVar8;
          uVar8 = FUN_100f8696();
          *puVar5 = (char)uVar8;
          uVar8 = FUN_100f8696();
          puVar5[-1] = (char)uVar8;
          uVar8 = FUN_100f8696();
          puVar5[2] = (char)uVar8;
          puVar5 = puVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_c != (double *)0x0) {
        FUN_100085b9(local_c);
      }
    }
  }
  return local_18;
}

