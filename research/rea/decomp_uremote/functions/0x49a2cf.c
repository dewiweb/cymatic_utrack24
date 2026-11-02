// rea decompile_all
// name: FUN_0049a2cf
// address: 0x49a2cf
// body: available
// range: 0x49a2cf-0x49a4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49a2ff to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a2cf(int param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int local_10;
  size_t local_c;
  char local_8;
  char local_7;
  char local_6;
  byte local_5;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0xcc) == 0) && (*(char *)(param_1 + 0x109) == '\0')) {
    if ((*(uint *)(param_1 + 0x28) & 0x400) == 0) goto LAB_0049a2fd;
    FUN_0049c48b();
  }
  if ((*(char *)(param_1 + 0x108) != '\0') && ((*(byte *)(param_1 + 0x30) & 2) != 0)) {
    cVar1 = *(char *)(param_1 + 0x109);
    if (cVar1 == '\0') {
      bVar2 = (*(byte *)(param_1 + 0xcc) & 7) == 0;
LAB_0049a3e6:
      if (!bVar2) goto LAB_0049a443;
    }
    else {
      if (cVar1 == '\x01') {
        if ((*(byte *)(param_1 + 0xcc) & 7) != 0) goto LAB_0049a443;
        bVar2 = *(uint *)(param_1 + 0xb4) < 5;
      }
      else {
        if (cVar1 == '\x02') {
          bVar2 = ((byte)*(undefined4 *)(param_1 + 0xcc) & 7) == 4;
          goto LAB_0049a3e6;
        }
        if (cVar1 == '\x03') {
          if ((*(byte *)(param_1 + 0xcc) & 3) != 0) goto LAB_0049a443;
          bVar2 = *(uint *)(param_1 + 0xb4) < 3;
        }
        else {
          if (cVar1 == '\x04') {
            bVar2 = ((byte)*(undefined4 *)(param_1 + 0xcc) & 3) == 2;
            goto LAB_0049a3e6;
          }
          if (cVar1 != '\x05') {
            if ((cVar1 == '\x06') && ((*(byte *)(param_1 + 0xcc) & 1) == 0)) goto LAB_0049a443;
            goto LAB_0049a355;
          }
          if ((*(byte *)(param_1 + 0xcc) & 1) != 0) goto LAB_0049a443;
          bVar2 = *(uint *)(param_1 + 0xb4) < 2;
        }
      }
      if (bVar2) goto LAB_0049a443;
    }
  }
LAB_0049a355:
  local_8 = *(char *)(param_1 + 0x10b);
  local_6 = *(char *)(param_1 + 0x110);
  local_10 = *(int *)(param_1 + 0xc0);
  local_7 = *(char *)(param_1 + 0x10d);
  local_5 = local_7 * local_6;
  if (local_5 < 8) {
    local_c = (uint)local_5 * local_10 + 7 >> 3;
  }
  else {
    local_c = (uint)(local_5 >> 3) * local_10;
  }
  _memcpy((void *)(*(int *)(param_1 + 0xd8) + 1),param_2,local_c);
  if ((((*(char *)(param_1 + 0x108) == '\0') || (5 < *(byte *)(param_1 + 0x109))) ||
      ((*(byte *)(param_1 + 0x30) & 2) == 0)) || (FUN_0049c6d9(), local_10 != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_0049a625();
    }
    if ((local_5 == *(byte *)(param_1 + 0x10e)) && (local_5 == *(byte *)(param_1 + 0x113))) {
      if (((*(byte *)(param_1 + 0x21c) & 4) != 0) && (*(char *)(param_1 + 0x220) == '@')) {
        FUN_0049abbe();
      }
      if ((local_8 == '\x03') && (-1 < *(int *)(param_1 + 0x100))) {
        FUN_00499b5b();
      }
      FUN_0049c8f6(&local_10);
      if (*(code **)(param_1 + 0x17c) == (code *)0x0) {
        return;
      }
      (**(code **)(param_1 + 0x17c))
                (param_1,*(undefined4 *)(param_1 + 0xcc),*(undefined1 *)(param_1 + 0x109));
      return;
    }
LAB_0049a2fd:
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
LAB_0049a443:
  FUN_0049c5c9();
  return;
}

