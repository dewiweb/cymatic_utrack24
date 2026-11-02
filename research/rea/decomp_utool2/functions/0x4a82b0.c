// rea decompile_all
// name: FUN_004a82b0
// address: 0x4a82b0
// body: available
// range: 0x4a82b0-0x4a836d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004a82b0(undefined4 *param_1)

{
  POINT Point;
  DWORD DVar1;
  HWND hWnd;
  LONG LVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_20;
  double local_18;
  int *local_c;
  
  DVar1 = GetMessagePos();
  local_20 = SUB84((double)(int)(short)(DVar1 >> 0x10) + 6755399441055744.0,0);
  local_18 = (double)(int)(short)DVar1 + 6755399441055744.0;
  Point.y = local_20;
  Point.x = local_18._0_4_;
  hWnd = WindowFromPoint(Point);
  if (hWnd != (HWND)0x0) {
    LVar2 = GetWindowLongW(hWnd,-0x15);
    iVar3 = FUN_00462d70();
    if (LVar2 == iVar3) {
      piVar4 = (int *)GetWindowLongW(hWnd,8);
      if (piVar4 != (int *)0x0) goto LAB_004a832e;
    }
  }
  piVar4 = local_c;
LAB_004a832e:
  puVar5 = (undefined4 *)
           (**(code **)(*piVar4 + 0x2c))(&local_18,(float)local_18._0_4_,(float)local_20);
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  return piVar4;
}

