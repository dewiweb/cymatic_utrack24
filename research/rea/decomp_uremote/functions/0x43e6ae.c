// rea decompile_all
// name: FUN_0043e6ae
// address: 0x43e6ae
// body: available
// range: 0x43e6ae-0x43e79c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0043e6ae(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_40 [2];
  uint local_38;
  int local_34;
  char local_2e;
  char local_2d;
  undefined4 local_2c [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x43e6ba;
  iVar3 = *(int *)(in_ECX + 0x1c);
  local_34 = in_ECX;
  FUN_0045ef8e();
  local_2e = FUN_0045f738();
  FUN_0043e81a(local_40);
  local_8 = 0;
  local_2d = FUN_0045f751();
  iVar5 = local_34;
  iVar3 = *(int *)(iVar3 + 0x2c8);
  FUN_0045efa9();
  if (local_2e == '\0') {
    if (local_2d == '\0') {
      iVar2 = 0;
      do {
        *(bool *)((int)local_2c + iVar2) = iVar2 < iVar3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x18);
    }
    else {
      puVar6 = local_2c;
      for (iVar3 = 6; iVar5 = local_34, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0x1010101;
        puVar6 = puVar6 + 1;
      }
    }
  }
  else {
    puVar6 = local_2c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uVar4 = 0;
    iVar5 = local_34;
    if (0 < (int)local_38) {
      bVar7 = local_38 != 0;
      do {
        if (bVar7) {
          uVar1 = *(uint *)((int)local_40[0] + uVar4 * 4);
        }
        else {
          uVar1 = 0;
        }
        if (uVar1 < 0x18) {
          *(undefined1 *)((int)local_2c + uVar1) = 1;
        }
        uVar4 = uVar4 + 1;
        bVar7 = uVar4 < local_38;
      } while ((int)uVar4 < (int)local_38);
    }
  }
  for (iVar3 = 0; iVar3 < *(int *)(iVar5 + 0xe8); iVar3 = iVar3 + 1) {
    FUN_004c3170(*(undefined1 *)((int)local_2c + iVar3));
  }
  local_8 = 0xffffffff;
  _free(local_40[0]);
  FUN_005b9f18();
  return;
}

