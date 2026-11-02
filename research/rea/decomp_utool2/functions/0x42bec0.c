// rea decompile_all
// name: FUN_0042bec0
// address: 0x42bec0
// body: available
// range: 0x42bec0-0x42c26c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0042c10c) */
/* WARNING: Removing unreachable block (ram,0x0042c073) */
/* WARNING: Removing unreachable block (ram,0x0042c07e) */
/* WARNING: Removing unreachable block (ram,0x0042c117) */

undefined4 FUN_0042bec0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  double dVar11;
  uint local_2c;
  uint *puStack_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  uint *local_8;
  
  piVar1 = (int *)in_ECX[0xc];
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_24,&local_20);
    while (iVar2 == -0x7787ff6a) {
      (**(code **)(*(int *)in_ECX[0xc] + 0x50))((int *)in_ECX[0xc]);
      iVar2 = (**(code **)(*(int *)in_ECX[0xc] + 0x10))((int *)in_ECX[0xc],&local_24,&local_20);
    }
    if (-1 < iVar2) {
      iVar2 = local_20 - local_24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + in_ECX[0xe];
      }
      local_24 = local_24 - in_ECX[0xd];
      if (local_24 < 0) {
        local_24 = local_24 + in_ECX[0xe];
      }
      if (in_ECX[0xe] - iVar2 < local_24) {
        in_ECX[0xd] = local_20;
        local_24 = in_ECX[0xe] - iVar2;
      }
      if (local_24 < in_ECX[0xf]) {
        return 0;
      }
      local_c = (undefined4 *)0x0;
      local_8 = (uint *)0x0;
      local_10 = 0;
      local_14 = 0;
      iVar2 = (**(code **)(*(int *)in_ECX[0xc] + 0x2c))
                        ((int *)in_ECX[0xc],in_ECX[0xd],in_ECX[0xf],&local_c,&local_10,&local_8,
                         &local_14,0);
      if (iVar2 == -0x7787ff6a) {
        (**(code **)(*(int *)in_ECX[0xc] + 0x50))((int *)in_ECX[0xc]);
        iVar2 = (**(code **)(*(int *)in_ECX[0xc] + 0x2c))
                          ((int *)in_ECX[0xc],in_ECX[0xd],in_ECX[0xf],&local_c,&local_10,&local_8,
                           &local_14,0);
      }
      if (-1 < iVar2) {
        if (*in_ECX == 0x10) {
          pfVar9 = (float *)in_ECX[9];
          pfVar7 = (float *)in_ECX[10];
          uVar5 = local_14 >> 2;
          uVar10 = local_10 >> 2;
          local_1c = (double)CONCAT44(uVar5,(uint)local_1c);
          if (pfVar9 == (float *)0x0) {
            iVar2 = uVar10 - 1;
            puVar6 = local_c;
            if (-1 < iVar2) {
              do {
                uVar3 = FUN_0042c270();
                pfVar7 = pfVar7 + 1;
                *puVar6 = uVar3;
                iVar2 = iVar2 + -1;
                puVar6 = puVar6 + 1;
              } while (-1 < iVar2);
              uVar5 = (uint)local_1c._4_4_;
            }
            local_1c = (double)CONCAT44(local_8,(uint)local_1c);
            dVar11 = local_1c;
            while (uVar5 = uVar5 - 1, local_1c = dVar11, -1 < (int)uVar5) {
              local_2c = SUB84((double)(*pfVar7 * 32767.0) + 6755399441055744.0,0);
              if ((int)local_2c < -0x8000) {
                local_2c = -0x8000;
              }
              else if (0x7fff < (int)local_2c) {
                local_2c = 0x7fff;
              }
              pfVar7 = pfVar7 + 1;
              local_1c._4_4_ = (uint *)((ulonglong)dVar11 >> 0x20);
              *local_1c._4_4_ = local_2c << 0x10;
              local_1c._0_4_ = SUB84(dVar11,0);
              local_1c = (double)CONCAT44(local_1c._4_4_ + 1,(uint)local_1c);
              dVar11 = local_1c;
            }
          }
          else if (pfVar7 == (float *)0x0) {
            iVar2 = uVar10 - 1;
            puVar6 = local_c;
            if (-1 < iVar2) {
              do {
                uVar3 = FUN_0042c270();
                pfVar9 = pfVar9 + 1;
                *puVar6 = uVar3;
                iVar2 = iVar2 + -1;
                puVar6 = puVar6 + 1;
              } while (-1 < iVar2);
              uVar5 = (uint)local_1c._4_4_;
            }
            local_1c = (double)CONCAT44(local_8,(uint)local_1c);
            dVar11 = local_1c;
            while (uVar5 = uVar5 - 1, local_1c = dVar11, -1 < (int)uVar5) {
              local_2c = SUB84((double)(*pfVar9 * 32767.0) + 6755399441055744.0,0);
              if ((int)local_2c < -0x8000) {
                local_2c = 0xffff8000;
              }
              else if (0x7fff < (int)local_2c) {
                local_2c = 0x7fff;
              }
              pfVar9 = pfVar9 + 1;
              local_1c._4_4_ = (uint *)((ulonglong)dVar11 >> 0x20);
              *local_1c._4_4_ = local_2c & 0xffff;
              local_1c._0_4_ = SUB84(dVar11,0);
              local_1c = (double)CONCAT44(local_1c._4_4_ + 1,(uint)local_1c);
              dVar11 = local_1c;
            }
          }
          else {
            iVar2 = uVar10 - 1;
            puStack_28 = local_c;
            if (-1 < iVar2) {
              do {
                uVar3 = FUN_0042c270();
                pfVar9 = pfVar9 + 1;
                pfVar7 = pfVar7 + 1;
                *puStack_28 = uVar3;
                puStack_28 = puStack_28 + 1;
                iVar2 = iVar2 + -1;
              } while (-1 < iVar2);
              uVar5 = (uint)local_1c._4_4_;
            }
            iVar2 = uVar5 - 1;
            puStack_28 = local_8;
            if (-1 < iVar2) {
              iVar8 = (int)pfVar7 - (int)pfVar9;
              do {
                local_1c._0_4_ =
                     SUB84((double)(*(float *)(iVar8 + (int)pfVar9) * 32767.0) + 6755399441055744.0,
                           0);
                if ((int)(uint)local_1c < -0x8000) {
                  iVar4 = -0x8000;
                }
                else {
                  iVar4 = (uint)local_1c;
                  if (0x7fff < (int)(uint)local_1c) {
                    iVar4 = 0x7fff;
                  }
                }
                dVar11 = (double)(*pfVar9 * 32767.0) + 6755399441055744.0;
                local_1c._0_4_ = SUB84(dVar11,0);
                if ((int)(uint)local_1c < -0x8000) {
                  local_1c._0_4_ = 0xffff8000;
                }
                else if (0x7fff < (int)(uint)local_1c) {
                  local_1c._0_4_ = 0x7fff;
                }
                pfVar9 = pfVar9 + 1;
                *puStack_28 = (uint)local_1c & 0xffff | iVar4 << 0x10;
                puStack_28 = puStack_28 + 1;
                iVar2 = iVar2 + -1;
                local_1c = dVar11;
              } while (-1 < iVar2);
            }
          }
        }
        in_ECX[0xd] = (local_14 + local_10 + in_ECX[0xd]) % (uint)in_ECX[0xe];
        (**(code **)(*(int *)in_ECX[0xc] + 0x4c))
                  ((int *)in_ECX[0xc],local_c,local_10,local_8,local_14);
      }
      return 1;
    }
  }
  return 1;
}

