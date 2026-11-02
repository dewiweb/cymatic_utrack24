// rea decompile_all
// name: CPropertyPage::OnNotify
// address: 0x100d67fd
// body: available
// range: 0x100d67fd-0x100d692a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CPropertyPage::OnNotify(unsigned int,long,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPropertyPage::OnNotify(CPropertyPage *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  uint uVar5;
  long lVar6;
  
  iVar1 = CWnd::OnNotify((CWnd *)this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(HWND *)param_2 != *(HWND *)(this + 0x20)) &&
     (pHVar2 = GetParent(*(HWND *)(this + 0x20)), *(HWND *)param_2 != pHVar2)) {
LAB_100d6924:
    return 0;
  }
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xffffff2f:
    iVar1 = (**(code **)(*(int *)this + 0x198))();
    goto LAB_100d68a4;
  case 0xffffff30:
    uVar5 = (**(code **)(*(int *)this + 0x1a8))();
    break;
  case 0xffffff31:
    lVar6 = (**(code **)(*(int *)this + 0x1a0))();
    goto LAB_100d68e6;
  case 0xffffff32:
    lVar6 = (**(code **)(*(int *)this + 0x19c))();
LAB_100d68e6:
    uVar5 = MapWizardResult(this,lVar6);
    break;
  case 0xffffff33:
    SendMessageW(*(HWND *)(this + 0x20),0x111,0xe146,0);
    return 1;
  default:
    goto LAB_100d6924;
  case 0xffffff35:
    (**(code **)(*(int *)this + 0x18c))();
    return 1;
  case 0xffffff36:
    iVar1 = (**(code **)(*(int *)this + 0x188))();
    uVar5 = (-(uint)(iVar1 != 0) & 0xfffffffe) + 2;
    break;
  case 0xffffff37:
    iVar1 = (**(code **)(*(int *)this + 0x194))();
LAB_100d68a4:
    uVar5 = (uint)(iVar1 == 0);
    break;
  case 0xffffff38:
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPropertySheet_10138ac8,(CObject *)pCVar3);
    if (((pCVar4 != (CObject *)0x0) && (((byte)pCVar4[0x58] & 0x10) == 0)) &&
       (*(int *)(pCVar4 + 200) == 0)) {
      *param_3 = -1;
      return 1;
    }
    iVar1 = (**(code **)(*(int *)this + 400))();
    uVar5 = (iVar1 != 0) - 1;
  }
  *param_3 = uVar5;
  return 1;
}

