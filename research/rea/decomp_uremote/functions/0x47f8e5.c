// rea decompile_all
// name: FUN_0047f8e5
// address: 0x47f8e5
// body: available
// range: 0x47f8e5-0x47f9cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f8e5(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *in_EAX;
  uint uVar4;
  
  iVar1 = in_EAX[5];
  if ((iVar1 == 0x65) || (iVar1 == 0x66)) {
    if ((uint)in_EAX[0x34] < (uint)in_EAX[8]) {
      *(undefined4 *)(*in_EAX + 0x14) = 0x43;
      (**(code **)*in_EAX)();
    }
    (**(code **)(in_EAX[0x4f] + 8))();
  }
  else if (iVar1 != 0x67) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  puVar2 = (undefined4 *)in_EAX[0x4f];
  cVar3 = *(char *)((int)puVar2 + 0xd);
  while (cVar3 == '\0') {
    (*(code *)*puVar2)();
    uVar4 = 0;
    if (in_EAX[0x38] != 0) {
      do {
        if (in_EAX[2] != 0) {
          *(uint *)(in_EAX[2] + 4) = uVar4;
          *(int *)(in_EAX[2] + 8) = in_EAX[0x38];
          (**(code **)in_EAX[2])();
        }
        cVar3 = (**(code **)(in_EAX[0x52] + 4))();
        if (cVar3 == '\0') {
          *(undefined4 *)(*in_EAX + 0x14) = 0x18;
          (**(code **)*in_EAX)();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)in_EAX[0x38]);
    }
    (**(code **)(in_EAX[0x4f] + 8))();
    puVar2 = (undefined4 *)in_EAX[0x4f];
    cVar3 = *(char *)((int)puVar2 + 0xd);
  }
  (**(code **)(in_EAX[0x53] + 0xc))();
  (**(code **)(in_EAX[6] + 0x10))();
  FUN_00482a52();
  return;
}

