// rea decompile_all
// name: FUN_0042af18
// address: 0x42af18
// body: available
// range: 0x42af18-0x42afee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042af18(void)

{
  short sVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  short *in_EAX;
  ushort uVar5;
  int in_ECX;
  uint uVar6;
  undefined1 local_34 [16];
  int local_24;
  undefined4 local_10;
  undefined4 local_c;
  short local_8;
  
  sVar1 = *in_EAX;
  if (*(short *)(in_ECX + 0x15c) == 0) {
    sVar3 = 1;
  }
  else {
    sVar3 = *(short *)(in_ECX + 0x76);
  }
  uVar6 = (uint)sVar1;
  if (uVar6 < (uint)(int)sVar3) {
    cVar2 = FUN_0042ad5d(&local_10,&local_c,local_34);
    if (cVar2 == '\0') {
      if (sVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(short *)(*(int *)(in_ECX + 0x88) + -2 + uVar6 * 2) - *(short *)(in_ECX + 0x8c)) +
                1;
      }
      if (*(short *)(in_ECX + 0x15c) == 0) {
        uVar5 = *(ushort *)(in_ECX + 0x74);
      }
      else {
        uVar5 = (*(short *)(*(int *)(in_ECX + 0x88) + uVar6 * 2) - *(short *)(in_ECX + 0x8c)) + 1;
      }
      uVar6 = (uint)uVar4;
      while (uVar4 < uVar5) {
        if ((local_24 != *(int *)(in_ECX + 0x7c)) || (local_8 != (short)uVar6)) {
          FUN_0042ae1f(uVar6,local_10,local_c,1);
        }
        uVar6 = uVar6 + 1;
        uVar4 = (ushort)uVar6;
      }
    }
  }
  else if (*(char *)(in_ECX + 0x231) != '\0') {
    *(undefined4 *)(in_ECX + 0xc) = 0x86;
  }
  return;
}

