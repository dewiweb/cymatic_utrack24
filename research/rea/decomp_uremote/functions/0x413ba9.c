// rea decompile_all
// name: FUN_00413ba9
// address: 0x413ba9
// body: available
// range: 0x413ba9-0x413c89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413ba9(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  iVar2 = 0;
  if (*(int *)(in_EAX + 0x34) != 0) {
    *(undefined4 *)(in_EAX + 0x4d0) = 0;
    if (0 < *(int *)(in_EAX + 0x534)) {
      do {
        piVar3 = *(int **)(*(int *)(in_EAX + 0x530) + iVar2 * 4);
        iVar1 = 0;
        local_8 = 0;
        if (piVar3 != (int *)0x0) {
          do {
            if ((iVar1 < *piVar3) && (local_8 != 0)) {
              FUN_00413a77(iVar1,*piVar3 - iVar1);
            }
            local_8 = local_8 + piVar3[1];
            if ((local_8 * 0x200 != piVar3[2]) && (-1 < *piVar3)) {
              FUN_00413a77(*piVar3,1);
            }
            iVar1 = *piVar3;
            piVar3 = (int *)piVar3[3];
            iVar1 = iVar1 + 1;
          } while (piVar3 != (int *)0x0);
          if (local_8 != 0) {
            FUN_00413a77(iVar1,*(int *)(in_EAX + 0x18) - iVar1);
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_EAX + 0x534));
    }
    if ((*(code **)(in_EAX + 0x4d4) != (code *)0x0) && (0 < *(int *)(in_EAX + 0x4d0))) {
      (**(code **)(in_EAX + 0x4d4))
                (*(undefined4 *)(in_EAX + 0x4dc),*(int *)(in_EAX + 0x4d0),in_EAX + 0x410,
                 *(undefined4 *)(in_EAX + 0x4d8));
    }
  }
  return;
}

