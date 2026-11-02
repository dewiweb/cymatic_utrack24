// rea decompile_all
// name: FUN_00420d02
// address: 0x420d02
// body: available
// range: 0x420d02-0x420d8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420d02(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(uint *)(in_EAX + 0x18) < 0xffff) {
    uVar6 = *(uint *)(in_EAX + 0x18) + 1;
    do {
      uVar5 = *(uint *)(in_EAX + 0x28);
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      if (uVar6 <= *(uint *)(in_EAX + 0x2c)) {
        if (*(int *)(in_EAX + 0x34) == 0) {
          uVar5 = *(int *)(in_EAX + 0x30) + uVar6;
          do {
            uVar1 = uVar5 & 0xffff;
            if (uVar1 != 0) goto LAB_00420d85;
            uVar6 = uVar6 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar6 <= *(uint *)(in_EAX + 0x2c));
        }
        else {
          puVar4 = (undefined1 *)(*(int *)(in_EAX + 0x34) + (uVar6 - uVar5) * 2 + -1);
          do {
            puVar3 = puVar4 + 1;
            puVar4 = puVar4 + 2;
            if ((CONCAT11(*puVar3,*puVar4) != 0) &&
               (uVar1 = (uint)CONCAT11(*puVar3,*puVar4) + *(int *)(in_EAX + 0x30) & 0xffff,
               uVar1 != 0)) {
LAB_00420d85:
              *(uint *)(in_EAX + 0x18) = uVar6;
              *(uint *)(in_EAX + 0x1c) = uVar1;
              return;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 <= *(uint *)(in_EAX + 0x2c));
        }
      }
      iVar2 = FUN_00420bcd();
    } while (-1 < iVar2);
  }
  *(undefined4 *)(in_EAX + 0x18) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}

