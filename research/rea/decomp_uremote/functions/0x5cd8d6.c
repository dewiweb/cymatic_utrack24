// rea decompile_all
// name: FindSITargetTypeInstance
// address: 0x5cd8d6
// body: available
// range: 0x5cd8d6-0x5cd94c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindSITargetTypeInstance(struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,struct TypeDescriptor *)
   
   Library: Visual Studio 2008 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindSITargetTypeInstance
          (_s_RTTICompleteObjectLocator *param_1,TypeDescriptor *param_2,TypeDescriptor *param_3)

{
  uint uVar1;
  int iVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  int *piVar4;
  _s_RTTICompleteObjectLocator *p_Var5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  uVar7 = 0;
  iVar2 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  if (uVar1 != 0) {
    do {
      p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar2 + uVar7 * 4);
      if ((*(TypeDescriptor **)p_Var3 == param_2) ||
         (iVar6 = _strcmp((char *)(*(TypeDescriptor **)p_Var3 + 1),(char *)(param_2 + 1)),
         iVar6 == 0)) {
        do {
          uVar7 = uVar7 + 1;
          if (uVar1 <= uVar7) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          piVar4 = *(int **)(iVar2 + uVar7 * 4);
          if ((*(byte *)(piVar4 + 5) & 4) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          p_Var5 = (_s_RTTICompleteObjectLocator *)*piVar4;
          if (p_Var5 == param_1) {
            return p_Var3;
          }
          iVar6 = _strcmp((char *)(p_Var5 + 8),(char *)(param_1 + 8));
        } while (iVar6 != 0);
        return p_Var3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

