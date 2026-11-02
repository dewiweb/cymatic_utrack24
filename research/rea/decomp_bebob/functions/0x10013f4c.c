// rea decompile_all
// name: CWnd::ReflectChildNotify
// address: 0x10013f4c
// body: available
// range: 0x10013f4c-0x10014032 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CWnd::ReflectChildNotify(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CWnd::ReflectChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  AFX_MSGMAP_ENTRY local_10 [4];
  long *local_c;
  long local_8;
  
  if (param_1 < 0x112) {
    if (param_1 == 0x111) {
      iVar1 = CCmdTarget::OnCmdMsg
                        ((CCmdTarget *)this,0,param_2 >> 0x10 | 0xbd110000,(void *)0x0,
                         (AFX_CMDHANDLERINFO *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_4 != (long *)0x0) {
        *param_4 = 1;
        return 1;
      }
      return 1;
    }
    if (0x2a < param_1) {
      if ((param_1 < 0x30) || (param_1 == 0x39)) goto LAB_10013fe2;
      if (param_1 == 0x4e) {
        local_c = param_4;
        local_8 = param_3;
        iVar1 = CCmdTarget::OnCmdMsg
                          ((CCmdTarget *)this,0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,
                           &local_c,(AFX_CMDHANDLERINFO *)0x0);
        return iVar1;
      }
    }
  }
  else if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) {
LAB_10013fe2:
    iVar1 = FUN_10013739(this,param_1 + 0xbc00,(CDC *)param_2,(AFX_MSGMAP_ENTRY *)param_3,param_4);
    return iVar1;
  }
  if (param_1 - 0x132 < 7) {
    local_8 = param_1 - 0x132;
    local_c = (long *)param_2;
    iVar1 = FUN_10013739(this,0xbc19,(CDC *)0x0,local_10,param_4);
    if (*param_4 != 0) {
      return iVar1;
    }
  }
  return 0;
}

