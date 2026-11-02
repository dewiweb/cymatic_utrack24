// rea decompile_all
// name: CMFCPropertyGridColorProperty::SetColor
// address: 0x100499b0
// body: available
// range: 0x100499b0-0x10049a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridColorProperty::SetColor(unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridColorProperty::SetColor(CMFCPropertyGridColorProperty *this,ulong param_1)

{
  HWND hWnd;
  BOOL BVar1;
  undefined4 *puVar2;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100499bc;
  *(ulong *)(this + 0xe4) = param_1;
  COleVariant::operator=((COleVariant *)(this + 4),param_1);
  hWnd = (HWND)0x0;
  if (*(int *)(this + 0xc0) != 0) {
    hWnd = *(HWND *)(*(int *)(this + 0xc0) + 0x20);
  }
  BVar1 = IsWindow(hWnd);
  if (BVar1 != 0) {
    local_24.left = *(LONG *)(this + 0x2c);
    local_24.top = *(LONG *)(this + 0x30);
    local_24.right = *(LONG *)(this + 0x34);
    local_24.bottom = *(LONG *)(this + 0x38);
    InflateRect(&local_24,0,-1);
    InvalidateRect(*(HWND *)(*(int *)(this + 0xc0) + 0x20),&local_24,1);
    UpdateWindow(*(HWND *)(*(int *)(this + 0xc0) + 0x20));
  }
  if (*(int *)(this + 0xb4) != 0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0x24))(&local_28);
    local_8 = 0;
    CWnd::SetWindowTextW(*(CWnd **)(this + 0xb4),(wchar_t *)*puVar2);
    FUN_10001030((undefined4 *)(local_28 + -0x10));
  }
  FUN_100f90cf();
  return;
}

