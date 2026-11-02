// rea decompile_all
// name: CPaneContainer::Serialize
// address: 0x100cb8e9
// body: available
// range: 0x100cb8e9-0x100cbb2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::Serialize(CPaneContainer *this,CArchive *param_1)

{
  CRuntimeClass *this_00;
  int iVar1;
  CDockablePane *pCVar2;
  CObject *pCVar3;
  CPaneContainer *pCVar4;
  undefined4 uVar5;
  CPaneContainer *local_8;
  
  local_8 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    CArchive::operator>>(param_1,(long *)(this + 0x24));
    if (*(int *)(this + 0x24) == -1) {
      pCVar2 = LoadTabbedPane(this,param_1,(CList<unsigned_int,unsigned_int> *)(this + 100));
      *(CDockablePane **)(this + 4) = pCVar2;
    }
    CArchive::operator>>(param_1,(long *)(this + 0x28));
    if (*(int *)(this + 0x28) == -1) {
      pCVar2 = LoadTabbedPane(this,param_1,(CList<unsigned_int,unsigned_int> *)(this + 0x80));
      *(CDockablePane **)(this + 8) = pCVar2;
    }
    CArchive::operator>>(param_1,(long *)(this + 0x2c));
    if (*(int *)(this + 0x2c) != 0) {
      pCVar3 = CRuntimeClass::CreateObject((CRuntimeClass *)PTR_PTR_10161288);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar3);
      *(CObject **)(this + 0xc) = pCVar3;
      CPaneDivider::Init((CPaneDivider *)pCVar3,0,*(CWnd **)(*(int *)(this + 0x1c) + 0x4c));
      (**(code **)(**(int **)(this + 0xc) + 8))(param_1);
      *(undefined4 *)(*(int *)(this + 0xc) + 0x158) = *(undefined4 *)(this + 0x1c);
      CObList::AddTail((CObList *)(*(int *)(this + 0x1c) + 0x20),*(CObject **)(this + 0xc));
    }
    local_8 = (CPaneContainer *)0x0;
    CArchive::operator>>(param_1,(long *)&local_8);
    this_00 = *(CRuntimeClass **)(*(int *)(this + 0x1c) + 0x40);
    if (local_8 != (CPaneContainer *)0x0) {
      if (this_00 == (CRuntimeClass *)0x0) {
        pCVar4 = FUN_1000858a(0x9c);
        if (pCVar4 == (CPaneContainer *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = CPaneContainer(pCVar4,*(CPaneContainerManager **)(this + 0x1c),
                                 (CDockablePane *)0x0,(CDockablePane *)0x0,(CPaneDivider *)0x0);
        }
        *(undefined4 *)(this + 0x10) = uVar5;
      }
      else {
        pCVar3 = CRuntimeClass::CreateObject(this_00);
        *(CObject **)(this + 0x10) = pCVar3;
        *(undefined4 *)(pCVar3 + 0x1c) = *(undefined4 *)(this + 0x1c);
      }
      (**(code **)(**(int **)(this + 0x10) + 8))(param_1);
      *(CPaneContainer **)(*(int *)(this + 0x10) + 0x18) = this;
    }
    local_8 = (CPaneContainer *)0x0;
    CArchive::operator>>(param_1,(long *)&local_8);
    if (local_8 == (CPaneContainer *)0x0) {
      return;
    }
    if (this_00 == (CRuntimeClass *)0x0) {
      pCVar4 = FUN_1000858a(0x9c);
      if (pCVar4 == (CPaneContainer *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = CPaneContainer(pCVar4,*(CPaneContainerManager **)(this + 0x1c),(CDockablePane *)0x0,
                               (CDockablePane *)0x0,(CPaneDivider *)0x0);
      }
      *(undefined4 *)(this + 0x14) = uVar5;
    }
    else {
      pCVar3 = CRuntimeClass::CreateObject(this_00);
      *(CObject **)(this + 0x14) = pCVar3;
      *(undefined4 *)(pCVar3 + 0x1c) = *(undefined4 *)(this + 0x1c);
    }
    (**(code **)(**(int **)(this + 0x14) + 8))(param_1);
    *(CPaneContainer **)(*(int *)(this + 0x14) + 0x18) = this;
    return;
  }
  if (*(CWnd **)(this + 4) == (CWnd *)0x0) {
    iVar1 = 0;
LAB_100cb928:
    CArchive::operator<<(param_1,iVar1);
  }
  else {
    iVar1 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 4));
    if (iVar1 != -1) goto LAB_100cb928;
    SaveTabbedPane(this,param_1,*(CDockablePane **)(this + 4));
  }
  if (*(CWnd **)(this + 8) == (CWnd *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 8));
    if (iVar1 == -1) {
      SaveTabbedPane(this,param_1,*(CDockablePane **)(this + 8));
      goto LAB_100cb958;
    }
  }
  CArchive::operator<<(param_1,iVar1);
LAB_100cb958:
  if (*(CWnd **)(this + 0xc) == (CWnd *)0x0) {
    CArchive::operator<<(param_1,0);
  }
  else {
    iVar1 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 0xc));
    CArchive::operator<<(param_1,iVar1);
    (**(code **)(**(int **)(this + 0xc) + 8))(param_1);
  }
  CArchive::operator<<(param_1,(uint)(*(int *)(this + 0x10) != 0));
  if (*(int **)(this + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x10) + 8))(param_1);
  }
  CArchive::operator<<(param_1,(uint)(*(int *)(this + 0x14) != 0));
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 8))(param_1);
  }
  return;
}

