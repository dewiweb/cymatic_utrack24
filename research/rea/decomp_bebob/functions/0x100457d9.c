// rea decompile_all
// name: CVSListBoxBase::OnClickButton
// address: 0x100457d9
// body: available
// range: 0x100457d9-0x10045963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CVSListBoxBase::OnClickButton(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CVSListBoxBase::OnClickButton(CVSListBoxBase *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  HWND__ *pHVar5;
  CWnd *pCVar6;
  bool bVar7;
  bool bVar8;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100457e5;
  if (*(int *)(this + 200) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x174))();
    local_14 = iVar1;
    uVar2 = GetButtonID(this,param_1);
    if (0xfffffff1 < uVar2) {
      if (uVar2 < 0xfffffff4) {
        if (-1 < iVar1) {
          bVar7 = uVar2 != 0xfffffff3;
          if (bVar7) {
            iVar3 = (**(code **)(*(int *)this + 0x170))();
            bVar8 = iVar1 == iVar3 + -1;
          }
          else {
            bVar8 = iVar1 == 0;
          }
          if (!bVar8) {
            SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
            (**(code **)(*(int *)this + 0x17c))(&local_18,iVar1);
            local_8 = 0;
            uVar4 = (**(code **)(*(int *)this + 0x184))(iVar1);
            *(undefined4 *)(this + 0xd0) = 0;
            (**(code **)(*(int *)this + 0x16c))(local_14);
            *(undefined4 *)(this + 0xd0) = 1;
            if (bVar7) {
              local_14 = local_14 + 1;
            }
            else {
              local_14 = local_14 + -1;
            }
            iVar1 = local_14;
            (**(code **)(*(int *)this + 0x168))(&local_18,uVar4,local_14);
            (**(code **)(*(int *)this + 0x178))(iVar1);
            SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
            pHVar5 = (HWND__ *)(**(code **)(*(int *)this + 0x1c0))();
            pCVar6 = CWnd::FromHandle(pHVar5);
            if (pCVar6 != (CWnd *)0x0) {
              InvalidateRect(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,1);
            }
            if (bVar7) {
              (**(code **)(*(int *)this + 0x1b4))(iVar1);
            }
            else {
              (**(code **)(*(int *)this + 0x1b0))();
            }
            FUN_10001030((undefined4 *)(local_18 + -0x10));
          }
        }
      }
      else if (uVar2 == 0xfffffff4) {
        if (-1 < iVar1) {
          iVar3 = (**(code **)(*(int *)this + 0x1a4))(iVar1);
          if (iVar3 != 0) {
            (**(code **)(*(int *)this + 0x16c))(iVar1);
          }
        }
      }
      else if (uVar2 == 0xfffffff5) {
        (**(code **)(*(int *)this + 0x1bc))();
      }
    }
  }
  return;
}

