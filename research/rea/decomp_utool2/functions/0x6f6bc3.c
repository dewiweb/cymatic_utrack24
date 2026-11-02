// rea decompile_all
// name: FindVITargetTypeInstance
// address: 0x6f6bc3
// body: available
// range: 0x6f6bc3-0x6f6d79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindVITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2015 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindVITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  bool bVar5;
  uint uVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  TypeDescriptor *pTVar11;
  _s_RTTIBaseClassDescriptor *p_Var12;
  uint uVar13;
  bool bVar14;
  _s_RTTIBaseClassDescriptor *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  _s_RTTIBaseClassDescriptor *local_10;
  _s_RTTIBaseClassDescriptor *local_c;
  
  uVar13 = 0;
  local_c = (_s_RTTIBaseClassDescriptor *)0x0;
  p_Var12 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_20 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_10 = (_s_RTTIBaseClassDescriptor *)0x0;
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  uVar3 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  local_18 = 0;
  local_14 = 0xffffffff;
  bVar5 = true;
  local_1c = -1;
  if (uVar3 == 0) {
    return (_s_RTTIBaseClassDescriptor *)0x0;
  }
  do {
    p_Var4 = *(_s_RTTIBaseClassDescriptor **)(iVar2 + uVar13 * 4);
    if (local_18 < uVar13 - local_14) {
      if (*(TypeDescriptor **)p_Var4 != param_5) {
        pTVar11 = param_5 + 1;
        pTVar7 = *(TypeDescriptor **)p_Var4 + 1;
        do {
          bVar10 = *(byte *)&pTVar7->pVFTable;
          bVar14 = bVar10 < *(byte *)&pTVar11->pVFTable;
          if (bVar10 != *(byte *)&pTVar11->pVFTable) {
LAB_006f6c3f:
            uVar6 = -(uint)bVar14 | 1;
            goto LAB_006f6c44;
          }
          if (bVar10 == 0) break;
          bVar10 = *(byte *)((int)&pTVar7->pVFTable + 1);
          bVar1 = *(byte *)((int)&pTVar11->pVFTable + 1);
          bVar14 = bVar10 < bVar1;
          if (bVar10 != bVar1) goto LAB_006f6c3f;
          pTVar7 = (TypeDescriptor *)((int)&pTVar7->pVFTable + 2);
          pTVar11 = (TypeDescriptor *)((int)&pTVar11->pVFTable + 2);
        } while (bVar10 != 0);
        uVar6 = 0;
LAB_006f6c44:
        if (uVar6 != 0) goto LAB_006f6c5d;
      }
      if (((byte)p_Var4[0x14] & 3) == 0) {
        local_20 = p_Var4;
      }
      local_18 = *(uint *)(p_Var4 + 4);
      local_14 = uVar13;
      local_10 = p_Var4;
    }
LAB_006f6c5d:
    iVar9 = local_1c;
    if (*(TypeDescriptor **)p_Var4 == param_3) {
LAB_006f6c99:
      iVar8 = PMDtoOffset(param_1,(PMD *)(p_Var4 + 8));
      if (iVar8 != param_4) goto LAB_006f6d39;
      if (uVar13 - local_14 <= local_18) {
        if (bVar5) {
          if (((byte)local_10[0x14] & 0x40) == 0) {
            if (local_14 == 0) {
              bVar5 = (bool)(~(((byte)p_Var4[0x14] & 1) != 0) & 1);
            }
            bVar10 = 1;
          }
          else {
            uVar6 = *(uint *)(*(int *)(*(int *)(*(int *)(local_10 + 0x18) + 0xc) +
                                      (uVar13 - local_14) * 4) + 0x14);
            bVar10 = ~(byte)(uVar6 >> 2) & 1;
            bVar5 = (bool)(~((uVar6 & 1) != 0) & 1);
          }
          if ((((bVar5) && (bVar10 != 0)) &&
              (iVar9 = PMDtoOffset(param_1,(PMD *)(local_10 + 8)),
              bVar14 = p_Var12 != (_s_RTTIBaseClassDescriptor *)0x0, p_Var12 = local_10, bVar14)) &&
             (local_1c != iVar9)) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
        goto LAB_006f6d39;
      }
      if (((byte)p_Var4[0x14] & 5) != 0) goto LAB_006f6d39;
    }
    else {
      pTVar11 = param_3 + 1;
      pTVar7 = *(TypeDescriptor **)p_Var4 + 1;
      do {
        bVar10 = *(byte *)&pTVar7->pVFTable;
        bVar14 = bVar10 < *(byte *)&pTVar11->pVFTable;
        if (bVar10 != *(byte *)&pTVar11->pVFTable) {
LAB_006f6c8c:
          uVar6 = -(uint)bVar14 | 1;
          goto LAB_006f6c91;
        }
        if (bVar10 == 0) break;
        bVar10 = *(byte *)((int)&pTVar7->pVFTable + 1);
        bVar1 = *(byte *)((int)&pTVar11->pVFTable + 1);
        bVar14 = bVar10 < bVar1;
        if (bVar10 != bVar1) goto LAB_006f6c8c;
        pTVar7 = (TypeDescriptor *)((int)&pTVar7->pVFTable + 2);
        pTVar11 = (TypeDescriptor *)((int)&pTVar11->pVFTable + 2);
      } while (bVar10 != 0);
      uVar6 = 0;
LAB_006f6c91:
      if (uVar6 == 0) goto LAB_006f6c99;
LAB_006f6d39:
      local_1c = iVar9;
      p_Var4 = local_c;
    }
    local_c = p_Var4;
    uVar13 = uVar13 + 1;
    if (uVar3 <= uVar13) {
      if ((bVar5) && (p_Var12 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        return p_Var12;
      }
      if ((local_c != (_s_RTTIBaseClassDescriptor *)0x0) &&
         (local_20 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        return local_20;
      }
      return (_s_RTTIBaseClassDescriptor *)0x0;
    }
  } while( true );
}

