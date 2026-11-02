// rea decompile_all
// name: OnDrawRibbonKeyTip
// address: 0x100346b5
// body: available
// range: 0x100346b5-0x10034758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonKeyTip(class CDC *,class
   CMFCRibbonBaseElement *,class CRect,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >)
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonKeyTip(class CDC *,class
   CMFCRibbonBaseElement *,class CRect,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >)
   
   Library: Visual Studio 2010 Release */

void OnDrawRibbonKeyTip(CDC *param_1,int *param_2)

{
  code *pcVar1;
  HBRUSH pHVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  int in_stack_0000001c;
  undefined4 uStackY_28;
  
  uVar5 = 0;
  if (param_1 != (CDC *)0x0) {
    uVar5 = *(undefined4 *)(param_1 + 4);
  }
  puVar6 = &uStackY_28;
  uStackY_28 = 0x100346db;
  pHVar2 = GetSysColorBrush(0x18);
  puVar6[-1] = pHVar2;
  puVar6[-2] = &stack0x0000000c;
  puVar6[-3] = uVar5;
  puVar7 = puVar6 + -4;
  puVar6[-4] = 0x100346e7;
  FillRect((HDC)puVar6[-3],(RECT *)puVar6[-2],(HBRUSH)puVar6[-1]);
  *(undefined4 *)((int)puVar7 + -4) = 0x100346ef;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&stack0x0000001c)
  ;
  pcVar1 = *(code **)(*param_2 + 0x38);
  puVar8 = (undefined1 *)((int)puVar7 + -4);
  *(undefined4 *)((int)puVar7 + -4) = 0x100346f6;
  iVar3 = (*pcVar1)();
  DVar4 = DAT_10166ad0;
  if (iVar3 == 0) {
    *(undefined4 *)(puVar8 + -4) = 0x17;
    puVar9 = puVar8 + -8;
    *(undefined4 *)(puVar8 + -8) = 0x1003470b;
    DVar4 = GetSysColor(*(int *)(puVar8 + -4));
    puVar8 = puVar9;
  }
  iVar3 = *(int *)param_1;
  *(DWORD *)(puVar8 + -4) = DVar4;
  pcVar1 = *(code **)(iVar3 + 0x30);
  puVar10 = puVar8 + -8;
  *(undefined4 *)(puVar8 + -8) = 0x10034713;
  uVar5 = (*pcVar1)();
  iVar3 = *(int *)param_1;
  *(undefined4 *)(puVar10 + -4) = 0x25;
  *(undefined1 **)(puVar10 + -8) = &stack0x0000000c;
  *(undefined4 *)(puVar10 + -0xc) = *(undefined4 *)(in_stack_0000001c + -0xc);
  *(int *)(puVar10 + -0x10) = in_stack_0000001c;
  pcVar1 = *(code **)(iVar3 + 0x68);
  puVar11 = puVar10 + -0x14;
  *(undefined4 *)(puVar10 + -0x14) = 0x10034729;
  (*pcVar1)();
  iVar3 = *(int *)param_1;
  *(undefined4 *)(puVar11 + -4) = uVar5;
  pcVar1 = *(code **)(iVar3 + 0x30);
  puVar12 = puVar11 + -8;
  *(undefined4 *)(puVar11 + -8) = 0x10034731;
  (*pcVar1)();
  *(undefined4 *)(puVar12 + -4) = 0x17;
  puVar13 = puVar12 + -8;
  *(undefined4 *)(puVar12 + -8) = 0x10034735;
  DVar4 = GetSysColor(*(int *)(puVar12 + -4));
  *(DWORD *)(puVar13 + -4) = DVar4;
  *(undefined4 *)(puVar13 + -8) = 0x17;
  puVar14 = (ulong *)(puVar13 + -0xc);
  *(undefined4 *)(puVar13 + -0xc) = 0x1003473a;
  DVar4 = GetSysColor(*(int *)(puVar13 + -8));
  puVar14[-1] = DVar4;
  puVar14[-2] = (ulong)&stack0x0000000c;
  puVar14[-3] = 0x10034746;
  CDC::Draw3dRect(param_1,(tagRECT *)puVar14[-2],puVar14[-1],*puVar14);
  *puVar14 = 0x10034751;
  FUN_10001030((undefined4 *)(in_stack_0000001c + -0x10));
  *puVar14 = 0x10034756;
  return;
}

