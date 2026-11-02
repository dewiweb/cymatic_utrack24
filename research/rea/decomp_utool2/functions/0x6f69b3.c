// rea decompile_all
// name: FindMITargetTypeInstance
// address: 0x6f69b3
// body: available
// range: 0x6f69b3-0x6f6aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2015 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  byte bVar1;
  byte bVar2;
  _s_RTTIBaseClassDescriptor _Var3;
  int iVar4;
  uint uVar5;
  _s_RTTIBaseClassDescriptor *p_Var6;
  uint uVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  TypeDescriptor *pTVar10;
  uint uVar11;
  _s_RTTIBaseClassDescriptor *p_Var12;
  bool bVar13;
  uint local_10;
  uint local_c;
  _s_RTTIBaseClassDescriptor *local_8;
  
  local_10 = 0;
  uVar11 = 0;
  p_Var12 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_8 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_c = 0xffffffff;
  iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  uVar5 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar5 != 0) {
    do {
      p_Var6 = *(_s_RTTIBaseClassDescriptor **)(iVar4 + uVar11 * 4);
      if (local_10 < uVar11 - local_c) {
        if (*(TypeDescriptor **)p_Var6 != param_5) {
          pTVar10 = param_5 + 1;
          pTVar8 = *(TypeDescriptor **)p_Var6 + 1;
          do {
            bVar1 = *(byte *)&pTVar8->pVFTable;
            bVar13 = bVar1 < *(byte *)&pTVar10->pVFTable;
            if (bVar1 != *(byte *)&pTVar10->pVFTable) {
LAB_006f6a23:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_006f6a28;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)&pTVar8->pVFTable + 1);
            bVar2 = *(byte *)((int)&pTVar10->pVFTable + 1);
            bVar13 = bVar1 < bVar2;
            if (bVar1 != bVar2) goto LAB_006f6a23;
            pTVar8 = (TypeDescriptor *)((int)&pTVar8->pVFTable + 2);
            pTVar10 = (TypeDescriptor *)((int)&pTVar10->pVFTable + 2);
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_006f6a28:
          if (uVar7 != 0) goto LAB_006f6a3e;
        }
        p_Var12 = p_Var6;
        if (local_8 != (_s_RTTIBaseClassDescriptor *)0x0) {
          if (((byte)p_Var6[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          _Var3 = local_8[0x14];
          goto joined_r0x006f6ab2;
        }
        local_10 = *(uint *)(p_Var6 + 4);
        local_c = uVar11;
      }
LAB_006f6a3e:
      if (*(TypeDescriptor **)p_Var6 == param_3) {
LAB_006f6a76:
        iVar9 = PMDtoOffset(param_1,(PMD *)(p_Var6 + 8));
        if ((iVar9 == param_4) && (local_8 = p_Var6, p_Var12 != (_s_RTTIBaseClassDescriptor *)0x0))
        {
          if (local_10 < uVar11 - local_c) {
            if (((byte)p_Var12[0x14] & 3) != 0) {
              return (_s_RTTIBaseClassDescriptor *)0x0;
            }
          }
          else {
            if (((byte)p_Var12[0x14] & 0x40) != 0) {
              return (_s_RTTIBaseClassDescriptor *)
                     (~-(uint)((*(byte *)(*(int *)(*(int *)(*(int *)(p_Var12 + 0x18) + 0xc) +
                                                  (uVar11 - local_c) * 4) + 0x14) & 1) != 0) &
                     (uint)p_Var12);
            }
            if (local_c != 0) {
              return p_Var12;
            }
          }
          _Var3 = p_Var6[0x14];
joined_r0x006f6ab2:
          if (((byte)_Var3 & 1) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          return p_Var12;
        }
      }
      else {
        pTVar10 = param_3 + 1;
        pTVar8 = *(TypeDescriptor **)p_Var6 + 1;
        do {
          bVar1 = *(byte *)&pTVar8->pVFTable;
          bVar13 = bVar1 < *(byte *)&pTVar10->pVFTable;
          if (bVar1 != *(byte *)&pTVar10->pVFTable) {
LAB_006f6a6d:
            uVar7 = -(uint)bVar13 | 1;
            goto LAB_006f6a72;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)&pTVar8->pVFTable + 1);
          bVar2 = *(byte *)((int)&pTVar10->pVFTable + 1);
          bVar13 = bVar1 < bVar2;
          if (bVar1 != bVar2) goto LAB_006f6a6d;
          pTVar8 = (TypeDescriptor *)((int)&pTVar8->pVFTable + 2);
          pTVar10 = (TypeDescriptor *)((int)&pTVar10->pVFTable + 2);
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_006f6a72:
        if (uVar7 == 0) goto LAB_006f6a76;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

