// rea decompile_all
// name: FUN_00499edb
// address: 0x499edb
// body: available
// range: 0x499edb-0x49a155 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49a0eb to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499edb(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int local_8;
  
  if ((param_1 != 0) && (in_EAX != 0)) {
    FUN_00499dab(param_1);
    if ((*(byte *)(in_EAX + 8) & 8) == 0) {
      if (*(char *)(in_EAX + 0x19) == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_00491122();
      }
    }
    else {
      FUN_0049b66a(*(undefined4 *)(in_EAX + 0x10));
    }
    if ((*(byte *)(in_EAX + 8) & 0x10) != 0) {
      if (((*(uint *)(param_1 + 0x30) & 0x80000) != 0) && (*(char *)(in_EAX + 0x19) == '\x03')) {
        uVar2 = *(ushort *)(in_EAX + 0x16);
        iVar4 = 0;
        if (uVar2 != 0) {
          iVar5 = *(int *)(in_EAX + 0x9c);
          do {
            *(char *)(iVar5 + iVar4) = -1 - *(char *)(iVar5 + iVar4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)uVar2);
        }
      }
      FUN_0049bc12(*(undefined4 *)(in_EAX + 0x9c),*(undefined2 *)(in_EAX + 0x16),
                   *(undefined1 *)(in_EAX + 0x19));
    }
    if ((*(byte *)(in_EAX + 8) & 0x20) != 0) {
      FUN_0049bcf4(*(undefined1 *)(in_EAX + 0x19));
    }
    if ((*(byte *)(in_EAX + 8) & 0x40) != 0) {
      FUN_0049bdd5(*(undefined4 *)(in_EAX + 0xcc));
    }
    if ((*(uint *)(in_EAX + 8) & 0x100) != 0) {
      FUN_0049c156(*(undefined4 *)(in_EAX + 0xb4),*(undefined4 *)(in_EAX + 0xb8));
    }
    if ((*(uint *)(in_EAX + 8) & 0x400) != 0) {
      FUN_0049c1b4(*(undefined4 *)(in_EAX + 0xd4),*(undefined4 *)(in_EAX + 0xd8),
                   *(undefined1 *)(in_EAX + 0xe4),*(undefined1 *)(in_EAX + 0xe5),
                   *(undefined4 *)(in_EAX + 0xdc),*(undefined4 *)(in_EAX + 0xe0));
    }
    if ((*(uint *)(in_EAX + 8) & 0x4000) != 0) {
      FUN_0049c306(param_1,*(undefined1 *)(in_EAX + 0xfc),*(undefined4 *)(in_EAX + 0x100));
    }
    if ((*(byte *)(in_EAX + 8) & 0x80) != 0) {
      FUN_0049c39c(*(undefined4 *)(in_EAX + 0xc0),*(undefined4 *)(in_EAX + 0xc4));
    }
    if ((*(uint *)(in_EAX + 8) & 0x200) != 0) {
      FUN_0049c3fa();
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200;
    }
    if (((*(uint *)(in_EAX + 8) & 0x2000) != 0) && (iVar4 = 0, 0 < *(int *)(in_EAX + 0xf8))) {
      do {
        FUN_0049b9cb();
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_EAX + 0xf8));
    }
    iVar4 = 0;
    local_8 = 0;
    if (0 < *(int *)(in_EAX + 0x80)) {
      iVar5 = *(int *)(in_EAX + 0x88);
      do {
        piVar1 = (int *)(iVar4 + iVar5);
        iVar3 = *piVar1;
        if (iVar3 < 1) {
          if (iVar3 == 0) {
            FUN_0049bed4(piVar1[2],0);
            iVar5 = *(int *)(in_EAX + 0x88);
            *(undefined4 *)(iVar4 + iVar5) = 0xfffffffe;
          }
          else if (iVar3 == -1) {
            FUN_0049be32(piVar1[2]);
            goto LAB_0049a126;
          }
        }
        else {
          FUN_0049bf93(iVar3,piVar1[5],piVar1[6],piVar1[2]);
LAB_0049a126:
          iVar5 = *(int *)(in_EAX + 0x88);
          *(undefined4 *)(iVar4 + iVar5) = 0xfffffffd;
        }
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (local_8 < *(int *)(in_EAX + 0x80));
    }
    FUN_00499d27(2);
  }
  return;
}

