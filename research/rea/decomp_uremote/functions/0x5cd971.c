// rea decompile_all
// name: FindMITargetTypeInstance
// address: 0x5cd971
// body: available
// range: 0x5cd971-0x5cda78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2008 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor _Var1;
  uint uVar2;
  int iVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  int in_EAX;
  int iVar5;
  TypeDescriptor *pTVar6;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *local_18;
  _s_RTTIBaseClassDescriptor *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0xffffffff;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  iVar3 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_14 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_10 = 0;
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      p_Var4 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + local_8 * 4);
      if ((local_10 < local_8 - local_c) &&
         ((*(int *)p_Var4 == param_4 ||
          (iVar5 = _strcmp((char *)(*(int *)p_Var4 + 8),(char *)(param_4 + 8)), iVar5 == 0)))) {
        local_14 = p_Var4;
        if (local_18 != (_s_RTTIBaseClassDescriptor *)0x0) {
          if (((byte)p_Var4[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          _Var1 = local_18[0x14];
          goto joined_r0x005cda2a;
        }
        local_c = local_8;
        local_10 = *(uint *)(p_Var4 + 4);
      }
      if ((((*(_s_RTTICompleteObjectLocator **)p_Var4 == param_2) ||
           (iVar5 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var4 + 8),
                            (char *)(param_2 + 8)), iVar5 == 0)) &&
          (pTVar6 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar6 == param_3)) &&
         (local_18 = p_Var4, local_14 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        if (local_10 < local_8 - local_c) {
          if (((byte)local_14[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
        else {
          if (((byte)local_14[0x14] & 0x40) != 0) {
            return (_s_RTTIBaseClassDescriptor *)
                   (~-(uint)((*(byte *)(*(int *)(*(int *)(*(int *)(local_14 + 0x18) + 0xc) +
                                                (local_8 - local_c) * 4) + 0x14) & 1) != 0) &
                   (uint)local_14);
          }
          if (local_c != 0) {
            return local_14;
          }
        }
        _Var1 = p_Var4[0x14];
joined_r0x005cda2a:
        if (((byte)_Var1 & 1) != 0) {
          return (_s_RTTIBaseClassDescriptor *)0x0;
        }
        return local_14;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

