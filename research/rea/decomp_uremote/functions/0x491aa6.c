// rea decompile_all
// name: FUN_00491aa6
// address: 0x491aa6
// body: available
// range: 0x491aa6-0x491cce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x491b47 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491aa6(void)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  int unaff_EDI;
  bool bVar3;
  int local_10;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  byte local_5;
  
  if (in_EAX == 0) {
    return;
  }
  if ((*(byte *)(in_EAX + 0x2c) & 0x40) == 0) {
    FUN_004989f6();
  }
  local_8 = *(undefined1 *)(in_EAX + 0x10b);
  local_10 = *(int *)(in_EAX + 200);
  local_7 = *(undefined1 *)(in_EAX + 0x10c);
  local_6 = *(undefined1 *)(in_EAX + 0x10f);
  local_5 = *(byte *)(in_EAX + 0x10e);
  if (local_5 < 8) {
    local_c = (uint)local_5 * local_10 + 7 >> 3;
  }
  else {
    local_c = (uint)(local_5 >> 3) * local_10;
  }
  if ((*(char *)(in_EAX + 0x108) == '\0') || ((*(byte *)(in_EAX + 0x30) & 2) == 0)) {
LAB_00491b3f:
    if ((*(byte *)(in_EAX + 0x28) & 4) == 0) {
LAB_00491b45:
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    FUN_004987a0(*(undefined4 *)(in_EAX + 0xd8),local_c + 1);
    bVar2 = **(byte **)(in_EAX + 0xd8);
    if (bVar2 != 0) {
      if (4 < bVar2) goto LAB_00491b45;
      FUN_00498782(&local_10,*(byte **)(in_EAX + 0xd8) + 1,*(int *)(in_EAX + 0xd4) + 1);
    }
    _memcpy(*(void **)(in_EAX + 0xd4),*(void **)(in_EAX + 0xd8),local_c + 1);
    if (((*(byte *)(in_EAX + 0x21c) & 4) != 0) && (*(char *)(in_EAX + 0x220) == '@')) {
      FUN_00495801();
    }
    if (*(int *)(in_EAX + 0x30) != 0) {
      FUN_00492df5();
    }
    bVar2 = *(byte *)(in_EAX + 0x113);
    if (bVar2 == 0) {
      *(byte *)(in_EAX + 0x113) = local_5;
      if (*(byte *)(in_EAX + 0x112) < local_5) goto LAB_00491b45;
    }
    else if (bVar2 != local_5) goto LAB_00491b45;
    if (((*(char *)(in_EAX + 0x108) != '\0') && ((*(uint *)(in_EAX + 0x30) & 2) != 0)) &&
       (*(byte *)(in_EAX + 0x109) < 6)) {
      FUN_004981c6(*(byte *)(in_EAX + 0x109),*(uint *)(in_EAX + 0x30));
    }
    if (unaff_EDI != 0) {
      FUN_00497da3();
    }
    FUN_00498936();
    if (*(code **)(in_EAX + 0x178) != (code *)0x0) {
      (**(code **)(in_EAX + 0x178))();
    }
  }
  else {
    cVar1 = *(char *)(in_EAX + 0x109);
    if (cVar1 == '\0') {
      bVar3 = (*(byte *)(in_EAX + 0xcc) & 7) == 0;
LAB_00491ba4:
      if (bVar3) goto LAB_00491b3f;
    }
    else if (cVar1 == '\x01') {
      if ((*(byte *)(in_EAX + 0xcc) & 7) == 0) {
        bVar3 = *(uint *)(in_EAX + 0xb4) < 5;
LAB_00491b9a:
        if (!bVar3) goto LAB_00491b3f;
      }
    }
    else {
      if (cVar1 == '\x02') {
        bVar3 = ((byte)*(undefined4 *)(in_EAX + 0xcc) & 7) == 4;
        goto LAB_00491ba4;
      }
      if (cVar1 == '\x03') {
        if ((*(byte *)(in_EAX + 0xcc) & 3) == 0) {
          bVar3 = *(uint *)(in_EAX + 0xb4) < 3;
          goto LAB_00491b9a;
        }
      }
      else {
        if (cVar1 == '\x04') {
          bVar3 = ((byte)*(undefined4 *)(in_EAX + 0xcc) & 3) == 2;
          goto LAB_00491ba4;
        }
        if (cVar1 == '\x05') {
          if ((*(byte *)(in_EAX + 0xcc) & 1) == 0) {
            bVar3 = *(uint *)(in_EAX + 0xb4) < 2;
            goto LAB_00491b9a;
          }
        }
        else if ((*(byte *)(in_EAX + 0xcc) & 1) != 0) goto LAB_00491b3f;
      }
    }
    FUN_00498936();
  }
  return;
}

