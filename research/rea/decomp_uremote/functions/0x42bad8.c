// rea decompile_all
// name: FUN_0042bad8
// address: 0x42bad8
// body: available
// range: 0x42bad8-0x42bd4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bad8(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  undefined4 local_18;
  int local_c;
  
  if (*(int *)(unaff_ESI + 0x10) < *(int *)(unaff_ESI + 0x130)) {
    cVar1 = *(char *)(unaff_ESI + 0x231);
  }
  else {
    if (((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) ||
       (bVar3 = false, *(short *)(unaff_ESI + 0x15c) == 0)) {
      bVar3 = true;
    }
    if (*(ushort *)(unaff_ESI + 0x11e) < *(ushort *)(unaff_ESI + 0x2c)) {
      if (bVar3) {
        iVar4 = *(int *)(unaff_ESI + 0x30);
      }
      else {
        iVar4 = *(int *)(unaff_ESI + 0x38);
      }
      piVar5 = (int *)(iVar4 + (uint)*(ushort *)(unaff_ESI + 0x11e) * 8);
      if (*(ushort *)(unaff_ESI + 0x120) < *(ushort *)(unaff_ESI + 0x50)) {
        if ((bVar3) || (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0))) {
          local_c = (**(code **)(unaff_ESI + 0x240))();
        }
        else {
          thunk_FUN_00401000(*(int *)(*(int *)(unaff_ESI + 0x5c) +
                                     (uint)*(ushort *)(unaff_ESI + 0x120) * 8) - *piVar5,
                             *(int *)(unaff_ESI + 0xdc));
          thunk_FUN_00401000(*(int *)(*(int *)(unaff_ESI + 0x5c) + 4 +
                                     (uint)*(ushort *)(unaff_ESI + 0x120) * 8) - piVar5[1],
                             *(undefined4 *)(unaff_ESI + 0xe0));
          local_c = (**(code **)(unaff_ESI + 0x240))();
        }
        local_18 = (**(code **)(unaff_ESI + 0x23c))();
      }
      else {
        local_c = 0;
        local_18 = 0;
      }
      iVar4 = *(int *)(unaff_ESI + 0x130);
      while (0 < iVar4) {
        *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
        uVar2 = *(uint *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4);
        if (uVar2 < *(ushort *)(unaff_ESI + 0x74)) {
          if ((bVar3) || (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0))) {
            iVar4 = (**(code **)(unaff_ESI + 0x240))();
          }
          else {
            thunk_FUN_00401000(*(int *)(*(int *)(unaff_ESI + 0x80) + uVar2 * 8) - *piVar5,
                               *(int *)(unaff_ESI + 0xdc));
            thunk_FUN_00401000(*(int *)(*(int *)(unaff_ESI + 0x80) + 4 + uVar2 * 8) - piVar5[1],
                               *(undefined4 *)(unaff_ESI + 0xe0));
            iVar4 = (**(code **)(unaff_ESI + 0x240))();
          }
          (**(code **)(unaff_ESI + 0x23c))();
          if ((iVar4 != 0) && (local_c != 0)) {
            FUN_0040d230(local_18);
          }
          (**(code **)(unaff_ESI + 0x248))();
        }
        else if (*(char *)(unaff_ESI + 0x231) != '\0') {
          *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
          return;
        }
        *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
        iVar4 = *(int *)(unaff_ESI + 0x130);
      }
      goto LAB_0042bafb;
    }
    cVar1 = *(char *)(unaff_ESI + 0x231);
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
LAB_0042bafb:
  *(undefined4 *)(unaff_ESI + 0x130) = 1;
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}

