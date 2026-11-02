// rea decompile_all
// name: FUN_00687530
// address: 0x687530
// body: available
// range: 0x687530-0x6876f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00687530(void)

{
  undefined4 *puVar1;
  int iVar2;
  HDC pHVar3;
  COLORREF CVar4;
  int *in_ECX;
  HANDLE in_EDX;
  int *piVar5;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_44;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  undefined4 local_28;
  undefined4 local_20;
  int *local_1c;
  HDC local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00720f4c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  local_8 = 0;
  local_20 = 1;
  if ((((in_EDX != (HANDLE)0x0) &&
       (local_1c = in_ECX, iVar2 = GetObjectW(in_EDX,0x18,local_40), iVar2 != 0)) && (0 < local_3c))
     && (0 < local_38)) {
    pHVar3 = GetDC((HWND)0x0);
    local_18 = CreateCompatibleDC(pHVar3);
    ReleaseDC((HWND)0x0,pHVar3);
    pHVar3 = local_18;
    SelectObject(local_18,in_EDX);
    local_28 = juce::NativeImageType::vftable;
    local_8 = 1;
    FUN_00673a00(&local_14,2,local_3c,local_38,1);
    local_8 = local_8 & 0xffffff00;
    puVar1 = (undefined4 *)*in_ECX;
    *in_ECX = (int)local_14;
    local_14 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = puVar1 + 1;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00673170(in_ECX,1);
    while (local_38 = local_38 + -1, iVar2 = local_3c, -1 < local_38) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        CVar4 = GetPixel(pHVar3,iVar2,local_38);
        local_28._0_2_ = CONCAT11((char)(CVar4 >> 8),(char)(CVar4 >> 0x10));
        local_28 = (undefined **)CONCAT13(0xff,CONCAT12((char)CVar4,(undefined2)local_28));
        piVar5 = (int *)(local_54 * local_38 + local_50 * iVar2 + local_5c);
        FUN_0067f7a0(&local_14);
        pHVar3 = local_18;
        if (local_58 == 1) {
          *(char *)piVar5 = (char)local_14;
          *(char *)((int)piVar5 + 1) = (char)((uint)local_14 >> 8);
          *(undefined1 *)((int)piVar5 + 2) = local_14._2_1_;
        }
        else if (local_58 == 2) {
          *piVar5 = (int)local_14;
        }
        else if (local_58 == 3) {
          *(undefined1 *)piVar5 = local_14._3_1_;
        }
      }
    }
    DeleteDC(pHVar3);
    if (local_44 != (undefined4 *)0x0) {
      (**(code **)*local_44)(1);
    }
    ExceptionList = local_10;
    return local_1c;
  }
  ExceptionList = local_10;
  return in_ECX;
}

