// rea decompile_all
// name: FUN_1008f4b8
// address: 0x1008f4b8
// body: available
// range: 0x1008f4b8-0x1008f685 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008f681 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_1008f4b8(void *this,undefined4 *param_1,long param_2,long param_3,bool param_4,CPane *param_5,
            void **param_6)

{
  CPane *this_00;
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  int local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  do {
    do {
      do {
        if (param_1 == (undefined4 *)0x0) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (param_4) {
          if (param_1 == (undefined4 *)0x0) {
LAB_1008f681:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          puVar7 = (undefined4 *)param_1[1];
        }
        else {
          if (param_1 == (undefined4 *)0x0) goto LAB_1008f681;
          puVar7 = (undefined4 *)*param_1;
        }
        this_00 = (CPane *)param_1[2];
        param_1 = puVar7;
      } while ((this_00 == param_5) ||
              ((iVar2 = (**(code **)(*(int *)this_00 + 0x178))(), iVar2 == 0 &&
               (*(int *)((int)this + 4) == 0))));
      GetWindowRect(*(HWND *)(this_00 + 0x20),&local_28);
      CPane::GetVirtualRect(this_00,(CRect *)&local_18);
      BVar3 = EqualRect(&local_28,&local_18);
    } while (BVar3 != 0);
    local_2c = 0;
    bVar1 = CPane::IsLeftOf(this_00,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
    lVar4 = param_3;
    if (param_4) {
      if (bVar1) {
LAB_1008f5bd:
        if ((*(uint *)((int)this + 0x40) & 0xa000) != 0) {
LAB_1008f5c9:
          lVar4 = param_2;
        }
      }
      else {
        bVar1 = CPane::IsLeftOf(this_00,local_18.left,local_18.top,local_18.right,local_18.bottom,1)
        ;
        if (bVar1) goto LAB_1008f648;
LAB_1008f5ec:
        if ((*(uint *)((int)this + 0x40) & 0xa000) == 0) {
          lVar5 = _labs(param_3);
          lVar6 = _labs(local_18.top - local_28.top);
          if (lVar6 <= lVar5) {
            lVar4 = local_18.top - local_28.top;
          }
        }
        else {
          lVar4 = _labs(param_2);
          lVar5 = _labs(local_18.left - local_28.left);
          if (lVar4 < lVar5) goto LAB_1008f5c9;
          lVar4 = local_18.left - local_28.left;
        }
      }
      local_2c = _labs(lVar4);
    }
    else {
      if (!bVar1) goto LAB_1008f5bd;
      bVar1 = CPane::IsLeftOf(this_00,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
      if (bVar1) goto LAB_1008f5ec;
    }
LAB_1008f648:
    CDockingPanesRow::MovePane(this,this_00,local_2c,param_4,param_6);
    FUN_1008e1b4(this,(CObject *)this_00,!param_4,param_6);
  } while( true );
}

