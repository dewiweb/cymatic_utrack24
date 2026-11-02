// rea decompile_all
// name: FUN_004a8140
// address: 0x4a8140
// body: available
// range: 0x4a8140-0x4a8256 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8140(void)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  HWND pHVar5;
  int in_ECX;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_8 = in_ECX;
  if (*(char *)(in_ECX + 0x5c) != '\0') {
    if (*(int **)(in_ECX + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0xc))();
    }
    *(undefined1 *)(in_ECX + 0x5c) = 0;
  }
  if (*(char *)(in_ECX + 0x59) != '\0') {
    FUN_004a9940(&local_14);
    if ((DAT_00c8a690 != 0) && (uVar4 = GetMessageExtraInfo(), (uVar4 & 0xffffff80) == 0xff515780))
    {
      return;
    }
    DAT_00c8a9dc = DAT_00c8a9dc & 0xffffff8f;
    uVar2 = GetAsyncKeyState(0x10);
    uVar3 = GetAsyncKeyState(0x11);
    uVar4 = uVar2 >> 0xf | 2;
    if ((uVar3 & 0x8000) == 0) {
      uVar4 = (uint)(uVar2 >> 0xf);
    }
    uVar2 = GetAsyncKeyState(0x12);
    uVar6 = uVar4 | 4;
    if ((uVar2 & 0x8000) == 0) {
      uVar6 = uVar4;
    }
    uVar2 = GetAsyncKeyState(0xa5);
    uVar4 = uVar6 & 0xfffffff9;
    if ((uVar2 & 0x8000) == 0) {
      uVar4 = uVar6;
    }
    DAT_00c8a9dc = uVar4 | DAT_00c8a9dc & 0x70;
    cVar1 = *(char *)(local_8 + 0x59);
    *(undefined1 *)(local_8 + 0x59) = 0;
    pHVar5 = GetCapture();
    if (*(HWND *)(local_8 + 0x38) == pHVar5) {
      ReleaseCapture();
    }
    if (cVar1 != '\0') {
      uVar7 = FUN_00687700(local_14,local_10);
      FUN_0068d900(0,DAT_00c8a9dc,uVar7,local_14,local_10);
    }
  }
  return;
}

