// rea decompile_all
// name: FindSITargetTypeInstance
// address: 0x6f6b00
// body: available
// range: 0x6f6b00-0x6f6bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindSITargetTypeInstance(struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,struct TypeDescriptor *)
   
   Library: Visual Studio 2015 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindSITargetTypeInstance
          (_s_RTTICompleteObjectLocator *param_1,TypeDescriptor *param_2,TypeDescriptor *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  _s_RTTIBaseClassDescriptor *p_Var5;
  int *piVar6;
  uint uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  uint uVar10;
  bool bVar11;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      p_Var5 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + uVar7 * 4);
      if (*(TypeDescriptor **)p_Var5 == param_3) {
joined_r0x006f6b71:
        do {
          uVar7 = uVar7 + 1;
          if (uVar4 <= uVar7) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          piVar6 = *(int **)(iVar3 + uVar7 * 4);
          if ((*(byte *)(piVar6 + 5) & 4) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          pTVar8 = (TypeDescriptor *)*piVar6;
          if (pTVar8 == param_2) {
            return p_Var5;
          }
          pTVar9 = param_2 + 1;
          pTVar8 = pTVar8 + 1;
          do {
            bVar1 = *(byte *)&pTVar8->pVFTable;
            bVar11 = bVar1 < *(byte *)&pTVar9->pVFTable;
            if (bVar1 != *(byte *)&pTVar9->pVFTable) {
LAB_006f6bab:
              uVar10 = -(uint)bVar11 | 1;
              goto LAB_006f6bb0;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)&pTVar8->pVFTable + 1);
            bVar2 = *(byte *)((int)&pTVar9->pVFTable + 1);
            bVar11 = bVar1 < bVar2;
            if (bVar1 != bVar2) goto LAB_006f6bab;
            pTVar8 = (TypeDescriptor *)((int)&pTVar8->pVFTable + 2);
            pTVar9 = (TypeDescriptor *)((int)&pTVar9->pVFTable + 2);
          } while (bVar1 != 0);
          uVar10 = 0;
LAB_006f6bb0:
          if (uVar10 == 0) {
            return p_Var5;
          }
        } while( true );
      }
      pTVar8 = param_3 + 1;
      pTVar9 = *(TypeDescriptor **)p_Var5 + 1;
      do {
        bVar1 = *(byte *)&pTVar9->pVFTable;
        bVar11 = bVar1 < *(byte *)&pTVar8->pVFTable;
        if (bVar1 != *(byte *)&pTVar8->pVFTable) {
LAB_006f6b52:
          uVar10 = -(uint)bVar11 | 1;
          goto LAB_006f6b57;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)&pTVar9->pVFTable + 1);
        bVar2 = *(byte *)((int)&pTVar8->pVFTable + 1);
        bVar11 = bVar1 < bVar2;
        if (bVar1 != bVar2) goto LAB_006f6b52;
        pTVar9 = (TypeDescriptor *)((int)&pTVar9->pVFTable + 2);
        pTVar8 = (TypeDescriptor *)((int)&pTVar8->pVFTable + 2);
      } while (bVar1 != 0);
      uVar10 = 0;
LAB_006f6b57:
      if (uVar10 == 0) goto joined_r0x006f6b71;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

