// rea decompile_all
// name: FUN_0049e490
// address: 0x49e490
// body: available
// range: 0x49e490-0x49e99c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049e490(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int in_ECX;
  int *piVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 local_d8 [56];
  float local_a0;
  float local_9c;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  int *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  uint local_68;
  float local_64;
  undefined8 local_60;
  int *local_58;
  int *local_48;
  undefined1 local_40 [8];
  int *local_38;
  undefined1 local_30 [12];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00702f52;
  local_1c = ExceptionList;
  local_24 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_68 = 0;
  puVar2 = &stack0xfffffffc;
  if (DAT_00c8a67c == 0) {
    local_84 = operator_new(0xd0);
    local_14 = 0;
    DAT_00c8a67c = FUN_006cb960();
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  local_14 = 0xffffffff;
  piVar6 = *(int **)(*(int *)(DAT_00c8a67c + 0x20) + 0x20);
  local_70 = (double)CONCAT44(piVar6,(undefined4)local_70);
  local_84 = piVar6 + *(int *)(*(int *)(DAT_00c8a67c + 0x20) + 0x28);
  if (piVar6 != local_84) {
    do {
      if (*(char *)(*piVar6 + 0x28) != '\0') {
        FUN_0048f340(0,*piVar6);
        if (*(int *)(in_ECX + 0xf8) == 2) {
          puVar4 = (undefined4 *)FUN_0063bf80();
          fVar7 = (float10)(**(code **)(*(int *)*puVar4 + 0xc))();
          local_60 = (double)fVar7;
          (**(code **)(*local_38 + 0x54))(local_30);
        }
        else if (*(int *)(in_ECX + 0xf8) == 1) {
          puVar4 = (undefined4 *)FUN_0063bf80();
          fVar7 = (float10)(**(code **)(*(int *)*puVar4 + 0xc))();
          local_60 = (double)fVar7;
          (**(code **)(*local_48 + 0x54))(local_40);
        }
        else {
          puVar4 = (undefined4 *)FUN_0063bf80();
          local_68 = local_68 | 1;
          fVar7 = (float10)(**(code **)(*(int *)*puVar4 + 0xc))();
          local_60 = (double)fVar7;
        }
        if ((local_68 & 1) != 0) {
          local_68 = local_68 & 0xfffffffe;
          (**(code **)(*local_58 + 0x54))();
        }
        cVar3 = FUN_0049b210();
        if (cVar3 == '\0') {
          if (*(double *)(in_ECX + 0x70) < *(double *)(in_ECX + 0x78)) {
            if (local_60 < *(double *)(in_ECX + 0x70)) {
              dVar11 = 0.0;
            }
            else if (local_60 <= *(double *)(in_ECX + 0x78)) {
              fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))(local_60);
              dVar11 = (double)fVar7;
              local_60 = dVar11;
            }
            else {
              dVar11 = 1.0;
            }
          }
          else {
            dVar11 = 0.5;
          }
          iVar1 = *(int *)(in_ECX + 0x18);
          if ((((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 10)) || ((iVar1 == 0xc || (iVar1 == 8))))
          {
            dVar11 = 1.0 - dVar11;
          }
          fVar8 = (float)((double)*(int *)(in_ECX + 0xf4) * dVar11 + (double)*(int *)(in_ECX + 0xf0)
                         );
          cVar3 = FUN_0049b1f0();
          fVar10 = 0.5;
          fVar9 = fVar8;
          if (cVar3 == '\0') {
            fVar9 = (float)*(int *)(*(int *)(in_ECX + 0x14) + 0x1c) * 0.5;
          }
          cVar3 = FUN_0049b1d0();
          if (cVar3 == '\0') {
            fVar8 = (float)*(int *)(*(int *)(in_ECX + 0x14) + 0x18) * fVar10;
          }
          local_7c = fVar9;
          for (iVar1 = *(int *)(in_ECX + 0x14); local_80 = fVar8, iVar1 != 0;
              iVar1 = *(int *)(iVar1 + 0xc)) {
            pfVar5 = (float *)FUN_004b29e0(fVar8);
            fVar8 = *pfVar5;
            local_7c = pfVar5[1];
          }
          local_70._4_4_ = (int *)((ulonglong)local_70 >> 0x20);
          piVar6 = local_70._4_4_;
          local_8c = fVar8;
          local_88 = local_7c;
        }
        else {
          FUN_0048f150();
          fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))
                                     (*(undefined8 *)(in_ECX + 0x98));
          local_70 = (double)fVar7;
          fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))(local_60);
          local_64 = (float)((double)*(int *)(in_ECX + 0xfc) * (local_70 - (double)fVar7));
          local_60._0_4_ = SUB84((double)fVar7,0);
          if (*(int *)(in_ECX + 0x18) == 5) {
            fVar8 = local_78 + -local_64;
            local_64 = local_74 + 0.0;
          }
          else {
            if (*(int *)(in_ECX + 0x18) == 6) {
              fVar8 = local_78 + 0.0;
            }
            else {
              fVar8 = local_64 * -0.5;
              local_64 = local_64 * 0.5;
              fVar8 = local_78 + fVar8;
            }
            local_64 = local_74 + local_64;
          }
          local_60 = (double)CONCAT44(fVar8,(int)local_60);
          FUN_006d2360(local_d8);
          FUN_00418db0();
          pfVar5 = (float *)FUN_0040e4d0();
          fVar8 = pfVar5[1];
          fVar9 = fVar8;
          if ((fVar8 <= local_64) && (fVar9 = pfVar5[3] + fVar8, local_64 <= pfVar5[3] + fVar8)) {
            fVar9 = local_64;
          }
          local_70 = (double)CONCAT44(fVar9,(undefined4)local_70);
          fVar8 = *pfVar5;
          local_64 = fVar8;
          if ((fVar8 <= local_60._4_4_) &&
             (local_64 = pfVar5[2] + fVar8, local_60._4_4_ <= pfVar5[2] + fVar8)) {
            local_64 = local_60._4_4_;
          }
          FUN_004b0c70();
          *(undefined4 *)(in_ECX + 0xec) = local_90;
          *(undefined4 *)(in_ECX + 0xe8) = local_94;
          *(undefined4 *)(in_ECX + 0xe0) = local_94;
          *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(in_ECX + 0xec);
          *(undefined8 *)(in_ECX + 0x98) = *(undefined8 *)(in_ECX + 0x90);
          fVar8 = local_64;
        }
        FUN_004b1670(fVar8);
        local_70 = (double)local_9c + 6755399441055744.0;
        local_60 = (double)local_a0 + 6755399441055744.0;
        SetCursorPos((int)local_60,SUB84(local_70,0));
      }
      piVar6 = piVar6 + 1;
      local_70 = (double)CONCAT44(piVar6,(undefined4)local_70);
    } while (piVar6 != local_84);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

