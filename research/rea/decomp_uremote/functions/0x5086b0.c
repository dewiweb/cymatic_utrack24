// rea decompile_all
// name: FUN_005086b0
// address: 0x5086b0
// body: available
// range: 0x5086b0-0x508c81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_005086b0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  BOOL BVar4;
  undefined4 *in_ECX;
  undefined4 *local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005ce6e8;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_6 != 0) {
    in_ECX[3] = &DAT_005e8f0c;
    in_ECX[0x2d7] = CPNS::ICHAI::vftable;
  }
  *in_ECX = CPG::IThreadNotificationHandler::vftable;
  in_ECX[1] = CPG::ITaskManagerHandler::vftable;
  in_ECX[2] = CPG::IMessageLinkCHAINotificationHandler::vftable;
  uStack_7 = 0;
  local_8 = 3;
  *in_ECX = CPCHAI::CCHAICore::vftable;
  in_ECX[1] = CPCHAI::CCHAICore::vftable;
  in_ECX[2] = CPCHAI::CCHAICore::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) = CPCHAI::CCHAICore::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 8) = *(int *)(in_ECX[3] + 4) + -0xb50;
  in_ECX[5] = param_1;
  in_ECX[0xd] = "CHAICore";
  FUN_005157a0(uVar1);
  in_ECX[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
  local_8 = 4;
  in_ECX[0x1c] = param_2;
  FUN_005017d0();
  local_8 = 5;
  FUN_0052def0();
  local_8 = 6;
  *(undefined1 *)((int)in_ECX + 0xad) = 1;
  *(undefined1 *)((int)in_ECX + 0xae) = 1;
  *(undefined1 *)((int)in_ECX + 0xaf) = 1;
  *(undefined2 *)(in_ECX + 0x2c) = 0;
  uVar2 = FUN_00514fd0();
  in_ECX[0x2d] = uVar2;
  FUN_005017d0();
  local_8 = 7;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0x32;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  FUN_005017d0();
  in_ECX[0x36] = 0;
  *(undefined2 *)(in_ECX + 0x38) = 0;
  in_ECX[0x37] = 0;
  *(undefined2 *)(in_ECX + 0x39) = 0;
  *(undefined2 *)(in_ECX + 0x3b) = 0;
  in_ECX[0x3a] = 0;
  local_8 = 10;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  *(undefined2 *)(in_ECX + 0x3f) = 1;
  *(undefined2 *)((int)in_ECX + 0xfe) = 1;
  FUN_00506310();
  local_8 = 0xb;
  FUN_005017d0();
  local_8 = 0xc;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 2;
  in_ECX[0x48] = 0;
  FUN_0052cf60();
  local_8 = 0xd;
  FUN_005017d0();
  local_8 = 0xe;
  FUN_005017d0();
  local_8 = 0xf;
  FUN_005017d0();
  local_8 = 0x10;
  FUN_0052ccb0(in_ECX);
  local_8 = 0x11;
  in_ECX[0xef] = "CHAICore";
  FUN_005157a0();
  pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  in_ECX[0xee] = pvVar3;
  local_8 = 0x12;
  if (in_ECX == (undefined4 *)0x0) {
    local_44 = (undefined4 *)0x0;
  }
  else {
    local_44 = in_ECX + 1;
  }
  FUN_0052c4a0(local_44);
  local_8 = 0x13;
  FUN_00529dd0(in_ECX);
  local_8 = 0x14;
  FUN_00528ab0();
  local_8 = 0x15;
  FUN_00528040(in_ECX);
  local_8 = 0x16;
  FUN_00523eb0(in_ECX);
  local_8 = 0x17;
  FUN_00523650(in_ECX);
  local_8 = 0x18;
  FUN_00521a10(in_ECX);
  local_8 = 0x19;
  FUN_005211d0(in_ECX);
  local_8 = 0x1a;
  FUN_0051f6c0();
  local_8 = 0x1b;
  FUN_00519ae0();
  local_8 = 0x1c;
  FUN_005171d0(in_ECX);
  local_8 = 0x1d;
  FUN_00515cb0();
  local_8 = 0x1e;
  FUN_00508190(in_ECX);
  local_8 = 0x1f;
  FUN_00512520(in_ECX + 0x2c2,"ICHAI_NotificationHandler");
  in_ECX[0x2c8] = CPCHAI::NotificationManager_CHAI::vftable;
  local_8 = 0x20;
  FUN_0052e740(in_ECX);
  FUN_00515a50();
  _local_8 = CONCAT31(uStack_7,0x21);
  *(undefined1 *)(in_ECX + 0x2b) = 0;
  in_ECX[0x4d] = 0;
  *(undefined1 *)(in_ECX + 0x4e) = 0;
  *(undefined2 *)(in_ECX + 0x54) = param_3;
  FUN_00501f30(param_4);
  FUN_00501f30(param_5);
  in_ECX[0x5c] = 3;
  DAT_0095c938 = 0;
  BVar4 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_0095c940);
  if (BVar4 != 0) {
    DAT_0095c938 = 1;
  }
  FUN_005063e0();
  uVar2 = FUN_0052e6e0();
  FUN_0052e3e0(uVar2);
  *(undefined1 *)(in_ECX + 0x49) = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

