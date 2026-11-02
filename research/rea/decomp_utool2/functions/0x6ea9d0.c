// rea decompile_all
// name: FUN_006ea9d0
// address: 0x6ea9d0
// body: available
// range: 0x6ea9d0-0x6eab8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ea9d0(IID *param_1)

{
  undefined4 **ppuVar1;
  LPVOID *ppvObj;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  HRESULT HVar5;
  int iVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  IID *local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728eea;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = *(undefined4 **)(in_ECX + 0x70);
  ppuVar1 = (undefined4 **)(in_ECX + 0x70);
  local_30 = param_1;
  if (puVar4 != (undefined4 *)0x0) {
    *ppuVar1 = (undefined4 *)0x0;
    (**(code **)*puVar4)(1,local_14);
  }
  piVar3 = (int *)FUN_006d1d80();
  if (piVar3 != (int *)0x0) {
    FUN_0068c830(&local_44,in_ECX);
    if ((undefined **)*piVar3 == juce::HWNDComponentPeer::vftable) {
      iVar6 = piVar3[0xe];
    }
    else {
      iVar6 = (*(code *)((undefined **)*piVar3)[1])();
    }
    local_2c = iVar6;
    local_28 = operator_new(0x44);
    local_8 = 0;
    puVar4 = (undefined4 *)FUN_004b5940(iVar6,in_ECX);
    ppvObj = (LPVOID *)(puVar4 + 0xf);
    local_8 = 1;
    local_28 = puVar4;
    HVar5 = OleCreate(local_30,(IID *)&DAT_00c2119c,1,(LPFORMATETC)0x0,(LPOLECLIENTSITE)puVar4[0xe],
                      (LPSTORAGE)puVar4[0xd],ppvObj);
    if (HVar5 == 0) {
      (**(code **)(*(int *)*ppvObj + 0x14))(*ppvObj,L"JUCE",0);
      HVar5 = OleSetContainedObject(*ppvObj,1);
      if (HVar5 == 0) {
        local_1c = local_3c + local_44;
        local_20 = local_40;
        local_18 = local_38 + local_40;
        local_24 = local_44;
        iVar6 = (**(code **)(*(int *)*ppvObj + 0x2c))
                          (*ppvObj,0xffffffff,0,puVar4[0xe],0,local_2c,&local_24);
        if (iVar6 == 0) {
          if (ppuVar1 != &local_28) {
            puVar2 = *ppuVar1;
            *ppuVar1 = puVar4;
            puVar4 = (undefined4 *)0x0;
            local_28 = (undefined4 *)0x0;
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)(1);
            }
          }
          puVar2 = *ppuVar1;
          uVar7 = FUN_006eace0();
          puVar2[0xc] = uVar7;
          if ((*ppuVar1)[0xc] != 0) {
            FUN_004b5a90(&local_44);
            puVar2 = *ppuVar1;
            LVar8 = GetWindowLongW((HWND)puVar2[0xc],-4);
            puVar2[0x10] = LVar8;
            SetWindowLongW((HWND)(*ppuVar1)[0xc],-4,0x4b5b80);
          }
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)*puVar4)(1);
          }
          goto LAB_006eab71;
        }
      }
    }
    (**(code **)*puVar4)(1);
  }
LAB_006eab71:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

