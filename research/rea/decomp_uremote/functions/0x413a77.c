// rea decompile_all
// name: FUN_00413a77
// address: 0x413a77
// body: available
// range: 0x413a77-0x413ba8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413a77(int param_1,short param_2)

{
  int in_EAX;
  short *psVar1;
  int in_ECX;
  int unaff_ESI;
  int iVar2;
  uint local_8;
  
  local_8 = in_EAX >> 9;
  if ((int)local_8 < 0) {
    local_8 = -local_8;
  }
  if ((*(byte *)(unaff_ESI + 0x3e4) & 2) == 0) {
    if ((int)local_8 < 0x100) goto LAB_00413ac9;
  }
  else {
    local_8 = local_8 & 0x1ff;
    if (0x100 < local_8) {
      local_8 = 0x200 - local_8;
      goto LAB_00413ac9;
    }
    if (local_8 != 0x100) goto LAB_00413ac9;
  }
  local_8 = 0xff;
LAB_00413ac9:
  param_1 = param_1 + *(int *)(unaff_ESI + 8);
  iVar2 = in_ECX + *(int *)(unaff_ESI + 0x10);
  if (0x7ffe < param_1) {
    param_1 = 0x7fff;
  }
  if (0x7ffffffe < iVar2) {
    iVar2 = 0x7fffffff;
  }
  if (local_8 != 0) {
    psVar1 = (short *)(*(int *)(unaff_ESI + 0x4d0) * 6 + 0x40a + unaff_ESI);
    if ((((*(int *)(unaff_ESI + 0x4d0) < 1) || (*(int *)(unaff_ESI + 0x4dc) != iVar2)) ||
        ((uint)(ushort)psVar1[1] + (int)*psVar1 != param_1)) || (*(byte *)(psVar1 + 2) != local_8))
    {
      if ((*(int *)(unaff_ESI + 0x4dc) == iVar2) && (*(int *)(unaff_ESI + 0x4d0) < 0x20)) {
        psVar1 = psVar1 + 3;
      }
      else {
        if ((*(code **)(unaff_ESI + 0x4d4) != (code *)0x0) && (0 < *(int *)(unaff_ESI + 0x4d0))) {
          (**(code **)(unaff_ESI + 0x4d4))
                    (*(int *)(unaff_ESI + 0x4dc),*(int *)(unaff_ESI + 0x4d0),unaff_ESI + 0x410,
                     *(undefined4 *)(unaff_ESI + 0x4d8));
        }
        *(undefined4 *)(unaff_ESI + 0x4d0) = 0;
        *(int *)(unaff_ESI + 0x4dc) = iVar2;
        psVar1 = (short *)(unaff_ESI + 0x410);
      }
      *psVar1 = (short)param_1;
      psVar1[1] = param_2;
      *(undefined1 *)(psVar1 + 2) = (undefined1)local_8;
      *(int *)(unaff_ESI + 0x4d0) = *(int *)(unaff_ESI + 0x4d0) + 1;
    }
    else {
      psVar1[1] = psVar1[1] + param_2;
    }
  }
  return;
}

