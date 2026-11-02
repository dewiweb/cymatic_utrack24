// rea decompile_all
// name: FUN_00516c60
// address: 0x516c60
// body: available
// range: 0x516c60-0x516c9e inclusive
// range: 0x516ca1-0x516d46 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516c60(undefined2 param_1,int param_2)

{
  int *in_ECX;
  undefined4 *local_1c;
  int local_8;
  
  local_8 = *in_ECX;
  do {
    if (local_8 == 0) {
LAB_00516cac:
      if (local_8 == 0) {
        local_1c = (undefined4 *)FUN_005af82d(0x14);
        if (local_1c == (undefined4 *)0x0) {
          local_1c = (undefined4 *)0x0;
        }
        else {
          *local_1c = CPG::CPListItem<CPCHAI::CGlobalTimerItem>::vftable;
          local_1c[1] = 0;
          local_1c[2] = 0;
          *local_1c = CPCHAI::CGlobalTimerItem::vftable;
          *(undefined2 *)(local_1c + 3) = 0;
          *(undefined2 *)(local_1c + 3) = param_1;
          local_1c[4] = param_2;
        }
        if (local_1c != (undefined4 *)0x0) {
          FUN_00517bb0(local_1c);
        }
      }
      return;
    }
    if (*(int *)(local_8 + 0x10) == param_2) {
      *(undefined2 *)(local_8 + 0xc) = param_1;
      goto LAB_00516cac;
    }
    if (local_8 == 0) {
      local_8 = *in_ECX;
    }
    else {
      local_8 = *(int *)(local_8 + 8);
    }
  } while( true );
}

