// rea decompile_all
// name: FUN_0043e556
// address: 0x43e556
// body: available
// range: 0x43e556-0x43e6ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e556(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined1 local_18 [20];
  
  iVar4 = *(int *)(in_ECX + 0x1c);
  local_2c = (iVar4 * 5) / 100;
  if (0x14 < local_2c) {
    local_2c = 0x14;
  }
  if ((*(byte *)(in_ECX + 0x94) & 2) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00439b5a(0x10);
  }
  iVar1 = (iVar4 - iVar1) - local_2c;
  FUN_0043d3ae(in_ECX);
  uVar2 = FUN_00439b5a(*(int *)(in_ECX + 0x18) / 0x19);
  *(undefined4 *)(in_ECX + 0x110) = uVar2;
  FUN_004c2047(local_18);
  FUN_004c0c1f();
  FUN_0044bfc5();
  iVar4 = *(int *)(in_ECX + 0x158);
  if (iVar4 != 0) {
    iVar3 = 0;
    *(float *)(in_ECX + 0x15c) =
         ((float)*(int *)(in_ECX + 0x18) - (float)(*(int *)(in_ECX + 0x110) * 2)) / (float)iVar4;
    if (0 < iVar4) {
      FUN_005b3fb0();
      do {
        iVar4 = local_2c;
        iVar5 = iVar1;
        uVar2 = FUN_005b3fb0(local_2c,iVar1);
        FUN_004c09cc(uVar2,iVar4,iVar5);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x158));
    }
  }
  return;
}

