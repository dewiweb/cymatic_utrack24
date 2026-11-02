// rea decompile_all
// name: FUN_100ba96b
// address: 0x100ba96b
// body: available
// range: 0x100ba96b-0x100bac74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100ba96b(void *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  double dVar5;
  CWnd *this_00;
  ulong uVar6;
  HDC hdc;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  UINT diFlags;
  ulonglong uVar8;
  tagAFXDrawState local_144 [12];
  CDC *local_138;
  HICON__ *local_134;
  CObject *local_130;
  CObject *local_12c;
  CObject *local_128;
  CObject *local_124;
  CMFCToolBarImages local_120 [80];
  CObject *local_d0;
  CObject *local_cc;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x144;
  local_8 = 0x100ba97a;
  local_138 = param_1;
  local_124 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_10133868,
                                 *(CObject **)((int)this + 0x30));
  if (local_124 == (CObject *)0x0) {
    if (*(HICON__ **)((int)this + 0xfc) == (HICON__ *)0x0) {
      piVar4 = *(int **)((int)this + 0x34);
      if ((piVar4 == (int *)0x0) || (piVar4[0x31] < 1)) {
        if ((*(int **)((int)this + 0x2c) != (int *)0x0) &&
           ((param_5 != param_3 && (param_6 != param_4)))) {
          if (param_2 == 0) {
            uVar7 = *(undefined4 *)((int)this + 0xe8);
          }
          else {
            uVar7 = *(undefined4 *)((int)this + 0xe4);
          }
          (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))
                    (local_138,param_3,param_4,param_5,param_6,this,param_2 == 0,uVar7,0);
        }
      }
      else {
        (**(code **)(*piVar4 + 0x1a8))
                  (local_138,param_3,param_4,param_5,param_6,this,*(undefined4 *)((int)this + 0xe4))
        ;
      }
    }
    else {
      if ((param_2 == 0) ||
         (local_134 = *(HICON__ **)((int)this + 0x100),
         *(HICON__ **)((int)this + 0x100) == (HICON__ *)0x0)) {
        local_134 = *(HICON__ **)((int)this + 0xfc);
      }
      if (param_2 == 0) {
        local_130 = (CObject *)0x20;
      }
      else {
        local_130 = (CObject *)0x10;
      }
      dVar5 = 1.0;
      if (DAT_10166c84 != 0) {
        dVar5 = _DAT_10166c7c;
      }
      local_12c = local_130;
      local_128 = local_130;
      local_124 = local_130;
      if (dVar5 != 1.0) {
        uVar8 = FUN_100f8660(local_130,extraout_EDX);
        local_130 = (CObject *)uVar8;
        uVar8 = FUN_100f8660(extraout_ECX,(int)(uVar8 >> 0x20));
        local_12c = (CObject *)uVar8;
      }
      if (*(int *)((int)this + 0x78) == 0) {
        diFlags = 3;
        this_00 = (CWnd *)(**(code **)(*(int *)this + 0x90))();
        if ((this_00 != (CWnd *)0x0) && (uVar6 = CWnd::GetExStyle(this_00), (uVar6 & 0x400000) != 0)
           ) {
          diFlags = 0x13;
        }
        if (local_138 == (CDC *)0x0) {
          hdc = (HDC)0x0;
        }
        else {
          hdc = *(HDC *)(local_138 + 4);
        }
        DrawIconEx(hdc,param_3,param_4,local_134,(int)local_130,(int)local_12c,0,(HBRUSH)0x0,diFlags
                  );
      }
      else {
        CMFCToolBarImages::CMFCToolBarImages(local_120);
        local_8 = 0;
        if (param_2 == 0) {
          local_128 = (CObject *)0x20;
        }
        else {
          local_128 = (CObject *)0x10;
        }
        local_124 = local_128;
        local_d0 = local_128;
        local_cc = local_128;
        CMFCToolBarImages::AddIcon(local_120,local_134,*(int *)((int)this + 0x120));
        CMFCToolBarImages::PrepareDrawImage(local_120,local_144,local_130,local_12c,0);
        CMFCToolBarImages::Draw(local_120,local_138,param_3,param_4,0,0,1,0,0,0,0xff);
        CMFCToolBarImages::EndDrawImage(local_120,local_144);
        local_8 = 0xffffffff;
        CMFCToolBarImages::~CMFCToolBarImages(local_120);
      }
    }
  }
  else {
    local_134 = *(HICON__ **)(local_124 + 0x78);
    *(undefined4 *)(local_124 + 0x78) = *(undefined4 *)((int)this + 0x78);
    local_12c = local_124 + 0x18;
    uVar7 = *(undefined4 *)local_12c;
    uVar1 = *(undefined4 *)(local_124 + 0x1c);
    uVar2 = *(undefined4 *)(local_124 + 0x20);
    uVar3 = *(undefined4 *)(local_124 + 0x24);
    *(undefined4 *)local_12c = *(undefined4 *)((int)this + 0x18);
    *(undefined4 *)(local_124 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)(local_124 + 0x20) = *(undefined4 *)((int)this + 0x20);
    *(undefined4 *)(local_124 + 0x24) = *(undefined4 *)((int)this + 0x24);
    (**(code **)(*(int *)local_124 + 0x7c))(local_138,param_2,param_3,param_4,param_5,param_6);
    *(undefined4 *)local_12c = uVar7;
    *(undefined4 *)(local_12c + 4) = uVar1;
    *(undefined4 *)(local_12c + 8) = uVar2;
    *(HICON__ **)(local_124 + 0x78) = local_134;
    *(undefined4 *)(local_12c + 0xc) = uVar3;
  }
  FUN_100f90cf();
  return;
}

