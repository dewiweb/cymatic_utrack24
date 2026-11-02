// rea decompile_all
// name: FUN_0046a2d0
// address: 0x46a2d0
// body: available
// range: 0x46a2d0-0x46a68e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046a520) */
/* WARNING: Removing unreachable block (ram,0x0046a4cb) */
/* WARNING: Removing unreachable block (ram,0x0046a42e) */
/* WARNING: Removing unreachable block (ram,0x0046a4eb) */
/* WARNING: Removing unreachable block (ram,0x0046a669) */

void FUN_0046a2d0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  undefined4 *in_ECX;
  int extraout_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007014b8;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *param_1;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = juce::Typeface::vftable;
  iVar4 = *(int *)(iVar2 + 0xc);
  in_ECX[2] = iVar4;
  piVar1 = (int *)(iVar4 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  in_ECX[3] = iVar2;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  in_ECX[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 5));
  local_8 = 0;
  *in_ECX = juce::WindowsDirectWriteTypeface::vftable;
  FUN_0046fef0();
  in_ECX[0xc] = 0;
  local_8._0_1_ = 2;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0xf] = 0;
  in_ECX[0x11] = 0x3f800000;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0x3f800000;
  in_ECX[0x16] = 0;
  FUN_00458890();
  (**(code **)(*param_2 + 0x14))();
  local_8._0_1_ = 3;
  (**(code **)(*param_2 + 0x10))();
  local_8._0_1_ = 4;
  iVar2 = (**(code **)(iRam00000000 + 0x10))();
  while( true ) {
    iVar2 = iVar2 + -1;
    if ((iVar2 < 0) || ((**(code **)(iRam00000000 + 0x14))(0,iVar2), iVar2 == 0)) goto LAB_0046a4f5;
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)(iRam00000000 + 0x20))(0);
    piVar1 = (int *)FUN_00640500();
    if (*(int *)(*param_1 + 0x10) == *piVar1) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00448730(*(undefined4 *)(*param_1 + 0x10));
    }
    piVar1 = in_ECX + -2;
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    if (iVar4 == 0) break;
    local_8._0_1_ = 4;
  }
  local_8._0_1_ = 4;
LAB_0046a4f5:
  if ((int *)in_ECX[0xc] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xc] + 8))();
  }
  in_ECX[0xc] = 0;
  (**(code **)(iRam00000000 + 0x34))(0);
  local_8._0_1_ = 3;
  piVar1 = (int *)in_ECX[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,&local_28);
    in_ECX[0x10] = (uint)local_28;
    fVar5 = (float)local_26;
    FUN_00411660();
    fVar6 = (float)local_24;
    FUN_00411660();
    in_ECX[0xf] = fVar5 / (fVar6 + fVar5);
    in_ECX[0xd] = (float)extraout_ECX / (fVar6 + fVar5);
    hdc = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(hdc,0x5a);
    iVar4 = GetDeviceCaps(hdc,0x58);
    iVar3 = GetDeviceCaps(hdc,0x5a);
    in_ECX[0xe] = (((float)(iVar2 + iVar4) * 0.5) / (float)iVar3) * (float)in_ECX[0xd];
    ReleaseDC((HWND)0x0,hdc);
    fVar5 = ((float)local_26 * 1024.0) / (float)(int)in_ECX[0x10];
    fVar6 = ((float)local_24 * 1024.0) / (float)(int)in_ECX[0x10];
    FUN_00411660();
    FUN_00411660();
    in_ECX[0x12] = 0;
    in_ECX[0x13] = 0;
    in_ECX[0x14] = 0;
    in_ECX[0x16] = 0;
    fVar5 = 1.0 / (fVar6 + fVar5);
    in_ECX[0x11] = fVar5;
    in_ECX[0x15] = fVar5;
  }
  local_8 = CONCAT31(local_8._1_3_,9);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

